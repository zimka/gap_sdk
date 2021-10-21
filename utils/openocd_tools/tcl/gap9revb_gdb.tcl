adapter_khz     500

#interface jlink
#transport select jtag
# Channel 1 is taken by Xilinx JTAG
#reset_config srst_pulls_trst

#adapter driver remote_bitbang
#remote_bitbang_port 9999
#remote_bitbang_host localhost

reset_config srst_only srst_nogate

set _CHIPNAME gap9

jtag newtap $_CHIPNAME riscv -irlen 5 -expected-id 0x20020bcb
jtag newtap $_CHIPNAME pulp -irlen 4 -expected-id 0x20021bcb

foreach t [jtag names] {
	puts [format "TAP: %s\n" $t]
}


set _TAP_RISCV $_CHIPNAME.riscv
set _TAP_PULP $_CHIPNAME.pulp
set _CL0 $_CHIPNAME.cl0
set _CL1 $_CHIPNAME.cl1
set _CL2 $_CHIPNAME.cl2
set _CL3 $_CHIPNAME.cl3
set _CL4 $_CHIPNAME.cl4
set _CL5 $_CHIPNAME.cl5
set _CL6 $_CHIPNAME.cl6
set _CL7 $_CHIPNAME.cl7
set _CL8 $_CHIPNAME.cl8
set _FC  $_CHIPNAME.fc

target create $_FC riscv -chain-position $_TAP_RISCV -coreid 0x9 
target create $_CL0 riscv -chain-position $_TAP_RISCV -coreid 0x0 -defer-examine
target create $_CL1 riscv -chain-position $_TAP_RISCV -coreid 0x1 -defer-examine
target create $_CL2 riscv -chain-position $_TAP_RISCV -coreid 0x2 -defer-examine
target create $_CL3 riscv -chain-position $_TAP_RISCV -coreid 0x3 -defer-examine
target create $_CL4 riscv -chain-position $_TAP_RISCV -coreid 0x4 -defer-examine
target create $_CL5 riscv -chain-position $_TAP_RISCV -coreid 0x5 -defer-examine
target create $_CL6 riscv -chain-position $_TAP_RISCV -coreid 0x6 -defer-examine
target create $_CL7 riscv -chain-position $_TAP_RISCV -coreid 0x7 -defer-examine
target create $_CL8 riscv -chain-position $_TAP_RISCV -coreid 0x8 -defer-examine
#target create $_CL8 riscv -chain-position $_TARGETNAME -coreid 0x8 -gdb-port 6666 -defer-examine
#target create $_CL8 riscv -chain-position $_TARGETNAME -coreid 0x8 -gdb-port 6666
target smp $_FC $_CL0 $_CL1 $_CL2 $_CL3 $_CL4 $_CL5 $_CL6 $_CL7 $_CL8
#target smp $_FC $_CL8

$_CL0 configure -rtos hwthread
$_CL1 configure -rtos hwthread
$_CL2 configure -rtos hwthread
$_CL3 configure -rtos hwthread
$_CL4 configure -rtos hwthread
$_CL5 configure -rtos hwthread
$_CL6 configure -rtos hwthread
$_CL7 configure -rtos hwthread
$_CL8 configure -rtos hwthread
$_FC configure -rtos hwthread

#proc cl6_attach_proc { } {
#    $::_CL6 arp_examine
#    $::_CL7 arp_examine
    # since smp, this will halt all concerned code
#    $::_CL6 arp_halt
    #$::_CL7 arp_halt
#    $::_CL6 arm semihosting enable
#    $::_CL7 arm semihosting enable
#}
#$_CL6 configure -event gdb-attach cl6_attach_proc

gdb_report_data_abort enable
gdb_report_register_access_error enable

riscv set_reset_timeout_sec 36000
riscv set_command_timeout_sec 36000

# prefer to use sba for system bus access
riscv set_prefer_sba on


proc poll_confreg { value } {
    irscan $::_TAP_PULP 0x6
    # size then value
    set ret [eval drscan $::_TAP_PULP 0x8 $value]
    puts "ret=$ret"
    while { $ret != 0x3 } {
        irscan $::_TAP_PULP 0x6
        # size then value
        set ret [eval drscan $::_TAP_PULP 0x8 $value]
        puts "ret=$ret"
    }
}

proc cluster_reset { addr } {
    # first reset the cluster
    
    poll off
    $::_FC mww 0x10200008 0x0
    $::_FC mww 0x1a1040e4 0x200
    # SOC CTRL + 0x170
    $::_FC mww 0x1a104170 0x0
    sleep 1
    $::_FC mww 0x1a104170 0x1
    
    # CLUSTER Ctrl: 0x10000000 + 0x00200000
    # addr: +0x40
    $::_FC mww 0x10200040 $addr 9
    # fetch en: +0x8 
    $::_FC mww 0x10200008 0x3ff
    # available: + 0xe4
    $::_FC mww 0x1a1040e4 0xffffffff
    $::_CL0 arp_halt
    $::_CL1 arp_halt
    $::_CL2 arp_halt
    $::_CL3 arp_halt
    $::_CL4 arp_halt
    $::_CL5 arp_halt
    $::_CL6 arp_halt
    $::_CL7 arp_halt
    $::_CL8 arp_halt
    $::_CL0 riscv set_ebreakm on
    $::_CL1 riscv set_ebreakm on
    $::_CL2 riscv set_ebreakm on
    $::_CL3 riscv set_ebreakm on
    $::_CL4 riscv set_ebreakm on
    $::_CL5 riscv set_ebreakm on
    $::_CL6 riscv set_ebreakm on
    $::_CL7 riscv set_ebreakm on
    $::_CL8 riscv set_ebreakm on
    poll on
}

proc jtag_init {} {
    puts "jtag init"
    targets $::_FC
    jtag_reset 0 1
    sleep 1
    jtag_reset 0 0
    sleep 1
    # wait for jtag ready
    poll_confreg 0xb
    echo "confreg polling done"

    #$::_FC arm semihosting_fileio enable
    #$::_FC arm semihosting_resexit enable
    # APB SOC CTRL: 0x1A100000 + 0x00004000
    # cl isolate: + 0xC
    #$::_FC mww 0x1a10400c 0
    # CLUSTER Ctrl: 0x10000000 + 0x00200000
    # addr +0x40
    #mww 0x10200040 0x1a00010c 9
    # fetch en: +0x8 
    #$::_FC mww 0x10200008 0x3ff
    # available: + 0xe4
    #$::_FC mww 0x1a1040e4 0xffffffff
    $::_CL0 arp_examine
    $::_CL1 arp_examine
    $::_CL2 arp_examine
    $::_CL3 arp_examine
    $::_CL4 arp_examine
    $::_CL5 arp_examine
    $::_CL6 arp_examine
    $::_CL7 arp_examine
    $::_CL8 arp_examine

    # halt all
    #$::_CL0 arp_halt
    #$::_CL1 arp_halt
    #$::_CL2 arp_halt
    #$::_CL3 arp_halt
    #$::_CL4 arp_halt
    #$::_CL5 arp_halt
    #$::_CL6 arp_halt
    #$::_CL7 arp_halt
    #$::_CL8 arp_halt
    #set ebreakm
    #$::_FC riscv set_ebreakm on
    #$::_CL0 riscv set_ebreakm on
    #$::_CL1 riscv set_ebreakm on
    #$::_CL2 riscv set_ebreakm on
    #$::_CL3 riscv set_ebreakm on
    #$::_CL4 riscv set_ebreakm on
    #$::_CL5 riscv set_ebreakm on
    #$::_CL6 riscv set_ebreakm on
    #$::_CL7 riscv set_ebreakm on
    #$::_CL8 riscv set_ebreakm on

    $::_FC arp_examine
    $::_FC arp_halt
    $::_FC arm semihosting enable
    #$::_CL0 arp_halt
    #$::_CL1 arp_halt
    #$::_CL2 arp_halt
    #$::_CL3 arp_halt
    #$::_CL4 arp_halt
    #$::_CL5 arp_halt
    #$::_CL6 arp_halt
    #$::_CL7 arp_halt
    #$::_CL8 arp_halt
    echo "examine done"
    jtag arp_init
}

proc init_reset {mode} {
    puts "hello"
    #targets $::_FC
    jtag_reset 0 1
    sleep 1
    jtag_reset 0 0
    sleep 1
    # wait for jtag ready
    poll_confreg 0xb
    echo "confreg polling done"
    jtag arp_init
}

proc load_and_start_binary { elf_file pc_entry } {
    targets $::_FC
    # first ensure we are rest and halt so that pc is accessible
    #$::_FC arp_reset assert 1
    #reset halt
    halt
    load_image ${elf_file} 0x0 elf
    reg pc ${pc_entry}
    resume
}


# dump jtag chain
#scan_chain

init


#targets $::_FC
#ftdi_set_signal nSRST 1
halt

#target smp $_FC $_CL8
#$::_FC arm semihosting enable

echo "Ready for Remote Connections"