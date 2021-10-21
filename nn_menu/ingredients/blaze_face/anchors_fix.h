
/*
['center_x', 'center_y', 'width', 'height'])

Q8 format to avoid further operations in post processing
*/

PI_L2 int16_t anchors_fix[896*4] = {
1024, 1024, 32768, 32768, 
1024, 1024, 32768, 32768, 
3072, 1024, 32768, 32768, 
3072, 1024, 32768, 32768, 
5120, 1024, 32768, 32768, 
5120, 1024, 32768, 32768, 
7168, 1024, 32768, 32768, 
7168, 1024, 32768, 32768, 
9216, 1024, 32768, 32768, 
9216, 1024, 32768, 32768, 
11264, 1024, 32768, 32768, 
11264, 1024, 32768, 32768, 
13312, 1024, 32768, 32768, 
13312, 1024, 32768, 32768, 
15360, 1024, 32768, 32768, 
15360, 1024, 32768, 32768, 
17408, 1024, 32768, 32768, 
17408, 1024, 32768, 32768, 
19456, 1024, 32768, 32768, 
19456, 1024, 32768, 32768, 
21504, 1024, 32768, 32768, 
21504, 1024, 32768, 32768, 
23552, 1024, 32768, 32768, 
23552, 1024, 32768, 32768, 
25600, 1024, 32768, 32768, 
25600, 1024, 32768, 32768, 
27648, 1024, 32768, 32768, 
27648, 1024, 32768, 32768, 
29696, 1024, 32768, 32768, 
29696, 1024, 32768, 32768, 
31744, 1024, 32768, 32768, 
31744, 1024, 32768, 32768, 
1024, 3072, 32768, 32768, 
1024, 3072, 32768, 32768, 
3072, 3072, 32768, 32768, 
3072, 3072, 32768, 32768, 
5120, 3072, 32768, 32768, 
5120, 3072, 32768, 32768, 
7168, 3072, 32768, 32768, 
7168, 3072, 32768, 32768, 
9216, 3072, 32768, 32768, 
9216, 3072, 32768, 32768, 
11264, 3072, 32768, 32768, 
11264, 3072, 32768, 32768, 
13312, 3072, 32768, 32768, 
13312, 3072, 32768, 32768, 
15360, 3072, 32768, 32768, 
15360, 3072, 32768, 32768, 
17408, 3072, 32768, 32768, 
17408, 3072, 32768, 32768, 
19456, 3072, 32768, 32768, 
19456, 3072, 32768, 32768, 
21504, 3072, 32768, 32768, 
21504, 3072, 32768, 32768, 
23552, 3072, 32768, 32768, 
23552, 3072, 32768, 32768, 
25600, 3072, 32768, 32768, 
25600, 3072, 32768, 32768, 
27648, 3072, 32768, 32768, 
27648, 3072, 32768, 32768, 
29696, 3072, 32768, 32768, 
29696, 3072, 32768, 32768, 
31744, 3072, 32768, 32768, 
31744, 3072, 32768, 32768, 
1024, 5120, 32768, 32768, 
1024, 5120, 32768, 32768, 
3072, 5120, 32768, 32768, 
3072, 5120, 32768, 32768, 
5120, 5120, 32768, 32768, 
5120, 5120, 32768, 32768, 
7168, 5120, 32768, 32768, 
7168, 5120, 32768, 32768, 
9216, 5120, 32768, 32768, 
9216, 5120, 32768, 32768, 
11264, 5120, 32768, 32768, 
11264, 5120, 32768, 32768, 
13312, 5120, 32768, 32768, 
13312, 5120, 32768, 32768, 
15360, 5120, 32768, 32768, 
15360, 5120, 32768, 32768, 
17408, 5120, 32768, 32768, 
17408, 5120, 32768, 32768, 
19456, 5120, 32768, 32768, 
19456, 5120, 32768, 32768, 
21504, 5120, 32768, 32768, 
21504, 5120, 32768, 32768, 
23552, 5120, 32768, 32768, 
23552, 5120, 32768, 32768, 
25600, 5120, 32768, 32768, 
25600, 5120, 32768, 32768, 
27648, 5120, 32768, 32768, 
27648, 5120, 32768, 32768, 
29696, 5120, 32768, 32768, 
29696, 5120, 32768, 32768, 
31744, 5120, 32768, 32768, 
31744, 5120, 32768, 32768, 
1024, 7168, 32768, 32768, 
1024, 7168, 32768, 32768, 
3072, 7168, 32768, 32768, 
3072, 7168, 32768, 32768, 
5120, 7168, 32768, 32768, 
5120, 7168, 32768, 32768, 
7168, 7168, 32768, 32768, 
7168, 7168, 32768, 32768, 
9216, 7168, 32768, 32768, 
9216, 7168, 32768, 32768, 
11264, 7168, 32768, 32768, 
11264, 7168, 32768, 32768, 
13312, 7168, 32768, 32768, 
13312, 7168, 32768, 32768, 
15360, 7168, 32768, 32768, 
15360, 7168, 32768, 32768, 
17408, 7168, 32768, 32768, 
17408, 7168, 32768, 32768, 
19456, 7168, 32768, 32768, 
19456, 7168, 32768, 32768, 
21504, 7168, 32768, 32768, 
21504, 7168, 32768, 32768, 
23552, 7168, 32768, 32768, 
23552, 7168, 32768, 32768, 
25600, 7168, 32768, 32768, 
25600, 7168, 32768, 32768, 
27648, 7168, 32768, 32768, 
27648, 7168, 32768, 32768, 
29696, 7168, 32768, 32768, 
29696, 7168, 32768, 32768, 
31744, 7168, 32768, 32768, 
31744, 7168, 32768, 32768, 
1024, 9216, 32768, 32768, 
1024, 9216, 32768, 32768, 
3072, 9216, 32768, 32768, 
3072, 9216, 32768, 32768, 
5120, 9216, 32768, 32768, 
5120, 9216, 32768, 32768, 
7168, 9216, 32768, 32768, 
7168, 9216, 32768, 32768, 
9216, 9216, 32768, 32768, 
9216, 9216, 32768, 32768, 
11264, 9216, 32768, 32768, 
11264, 9216, 32768, 32768, 
13312, 9216, 32768, 32768, 
13312, 9216, 32768, 32768, 
15360, 9216, 32768, 32768, 
15360, 9216, 32768, 32768, 
17408, 9216, 32768, 32768, 
17408, 9216, 32768, 32768, 
19456, 9216, 32768, 32768, 
19456, 9216, 32768, 32768, 
21504, 9216, 32768, 32768, 
21504, 9216, 32768, 32768, 
23552, 9216, 32768, 32768, 
23552, 9216, 32768, 32768, 
25600, 9216, 32768, 32768, 
25600, 9216, 32768, 32768, 
27648, 9216, 32768, 32768, 
27648, 9216, 32768, 32768, 
29696, 9216, 32768, 32768, 
29696, 9216, 32768, 32768, 
31744, 9216, 32768, 32768, 
31744, 9216, 32768, 32768, 
1024, 11264, 32768, 32768, 
1024, 11264, 32768, 32768, 
3072, 11264, 32768, 32768, 
3072, 11264, 32768, 32768, 
5120, 11264, 32768, 32768, 
5120, 11264, 32768, 32768, 
7168, 11264, 32768, 32768, 
7168, 11264, 32768, 32768, 
9216, 11264, 32768, 32768, 
9216, 11264, 32768, 32768, 
11264, 11264, 32768, 32768, 
11264, 11264, 32768, 32768, 
13312, 11264, 32768, 32768, 
13312, 11264, 32768, 32768, 
15360, 11264, 32768, 32768, 
15360, 11264, 32768, 32768, 
17408, 11264, 32768, 32768, 
17408, 11264, 32768, 32768, 
19456, 11264, 32768, 32768, 
19456, 11264, 32768, 32768, 
21504, 11264, 32768, 32768, 
21504, 11264, 32768, 32768, 
23552, 11264, 32768, 32768, 
23552, 11264, 32768, 32768, 
25600, 11264, 32768, 32768, 
25600, 11264, 32768, 32768, 
27648, 11264, 32768, 32768, 
27648, 11264, 32768, 32768, 
29696, 11264, 32768, 32768, 
29696, 11264, 32768, 32768, 
31744, 11264, 32768, 32768, 
31744, 11264, 32768, 32768, 
1024, 13312, 32768, 32768, 
1024, 13312, 32768, 32768, 
3072, 13312, 32768, 32768, 
3072, 13312, 32768, 32768, 
5120, 13312, 32768, 32768, 
5120, 13312, 32768, 32768, 
7168, 13312, 32768, 32768, 
7168, 13312, 32768, 32768, 
9216, 13312, 32768, 32768, 
9216, 13312, 32768, 32768, 
11264, 13312, 32768, 32768, 
11264, 13312, 32768, 32768, 
13312, 13312, 32768, 32768, 
13312, 13312, 32768, 32768, 
15360, 13312, 32768, 32768, 
15360, 13312, 32768, 32768, 
17408, 13312, 32768, 32768, 
17408, 13312, 32768, 32768, 
19456, 13312, 32768, 32768, 
19456, 13312, 32768, 32768, 
21504, 13312, 32768, 32768, 
21504, 13312, 32768, 32768, 
23552, 13312, 32768, 32768, 
23552, 13312, 32768, 32768, 
25600, 13312, 32768, 32768, 
25600, 13312, 32768, 32768, 
27648, 13312, 32768, 32768, 
27648, 13312, 32768, 32768, 
29696, 13312, 32768, 32768, 
29696, 13312, 32768, 32768, 
31744, 13312, 32768, 32768, 
31744, 13312, 32768, 32768, 
1024, 15360, 32768, 32768, 
1024, 15360, 32768, 32768, 
3072, 15360, 32768, 32768, 
3072, 15360, 32768, 32768, 
5120, 15360, 32768, 32768, 
5120, 15360, 32768, 32768, 
7168, 15360, 32768, 32768, 
7168, 15360, 32768, 32768, 
9216, 15360, 32768, 32768, 
9216, 15360, 32768, 32768, 
11264, 15360, 32768, 32768, 
11264, 15360, 32768, 32768, 
13312, 15360, 32768, 32768, 
13312, 15360, 32768, 32768, 
15360, 15360, 32768, 32768, 
15360, 15360, 32768, 32768, 
17408, 15360, 32768, 32768, 
17408, 15360, 32768, 32768, 
19456, 15360, 32768, 32768, 
19456, 15360, 32768, 32768, 
21504, 15360, 32768, 32768, 
21504, 15360, 32768, 32768, 
23552, 15360, 32768, 32768, 
23552, 15360, 32768, 32768, 
25600, 15360, 32768, 32768, 
25600, 15360, 32768, 32768, 
27648, 15360, 32768, 32768, 
27648, 15360, 32768, 32768, 
29696, 15360, 32768, 32768, 
29696, 15360, 32768, 32768, 
31744, 15360, 32768, 32768, 
31744, 15360, 32768, 32768, 
1024, 17408, 32768, 32768, 
1024, 17408, 32768, 32768, 
3072, 17408, 32768, 32768, 
3072, 17408, 32768, 32768, 
5120, 17408, 32768, 32768, 
5120, 17408, 32768, 32768, 
7168, 17408, 32768, 32768, 
7168, 17408, 32768, 32768, 
9216, 17408, 32768, 32768, 
9216, 17408, 32768, 32768, 
11264, 17408, 32768, 32768, 
11264, 17408, 32768, 32768, 
13312, 17408, 32768, 32768, 
13312, 17408, 32768, 32768, 
15360, 17408, 32768, 32768, 
15360, 17408, 32768, 32768, 
17408, 17408, 32768, 32768, 
17408, 17408, 32768, 32768, 
19456, 17408, 32768, 32768, 
19456, 17408, 32768, 32768, 
21504, 17408, 32768, 32768, 
21504, 17408, 32768, 32768, 
23552, 17408, 32768, 32768, 
23552, 17408, 32768, 32768, 
25600, 17408, 32768, 32768, 
25600, 17408, 32768, 32768, 
27648, 17408, 32768, 32768, 
27648, 17408, 32768, 32768, 
29696, 17408, 32768, 32768, 
29696, 17408, 32768, 32768, 
31744, 17408, 32768, 32768, 
31744, 17408, 32768, 32768, 
1024, 19456, 32768, 32768, 
1024, 19456, 32768, 32768, 
3072, 19456, 32768, 32768, 
3072, 19456, 32768, 32768, 
5120, 19456, 32768, 32768, 
5120, 19456, 32768, 32768, 
7168, 19456, 32768, 32768, 
7168, 19456, 32768, 32768, 
9216, 19456, 32768, 32768, 
9216, 19456, 32768, 32768, 
11264, 19456, 32768, 32768, 
11264, 19456, 32768, 32768, 
13312, 19456, 32768, 32768, 
13312, 19456, 32768, 32768, 
15360, 19456, 32768, 32768, 
15360, 19456, 32768, 32768, 
17408, 19456, 32768, 32768, 
17408, 19456, 32768, 32768, 
19456, 19456, 32768, 32768, 
19456, 19456, 32768, 32768, 
21504, 19456, 32768, 32768, 
21504, 19456, 32768, 32768, 
23552, 19456, 32768, 32768, 
23552, 19456, 32768, 32768, 
25600, 19456, 32768, 32768, 
25600, 19456, 32768, 32768, 
27648, 19456, 32768, 32768, 
27648, 19456, 32768, 32768, 
29696, 19456, 32768, 32768, 
29696, 19456, 32768, 32768, 
31744, 19456, 32768, 32768, 
31744, 19456, 32768, 32768, 
1024, 21504, 32768, 32768, 
1024, 21504, 32768, 32768, 
3072, 21504, 32768, 32768, 
3072, 21504, 32768, 32768, 
5120, 21504, 32768, 32768, 
5120, 21504, 32768, 32768, 
7168, 21504, 32768, 32768, 
7168, 21504, 32768, 32768, 
9216, 21504, 32768, 32768, 
9216, 21504, 32768, 32768, 
11264, 21504, 32768, 32768, 
11264, 21504, 32768, 32768, 
13312, 21504, 32768, 32768, 
13312, 21504, 32768, 32768, 
15360, 21504, 32768, 32768, 
15360, 21504, 32768, 32768, 
17408, 21504, 32768, 32768, 
17408, 21504, 32768, 32768, 
19456, 21504, 32768, 32768, 
19456, 21504, 32768, 32768, 
21504, 21504, 32768, 32768, 
21504, 21504, 32768, 32768, 
23552, 21504, 32768, 32768, 
23552, 21504, 32768, 32768, 
25600, 21504, 32768, 32768, 
25600, 21504, 32768, 32768, 
27648, 21504, 32768, 32768, 
27648, 21504, 32768, 32768, 
29696, 21504, 32768, 32768, 
29696, 21504, 32768, 32768, 
31744, 21504, 32768, 32768, 
31744, 21504, 32768, 32768, 
1024, 23552, 32768, 32768, 
1024, 23552, 32768, 32768, 
3072, 23552, 32768, 32768, 
3072, 23552, 32768, 32768, 
5120, 23552, 32768, 32768, 
5120, 23552, 32768, 32768, 
7168, 23552, 32768, 32768, 
7168, 23552, 32768, 32768, 
9216, 23552, 32768, 32768, 
9216, 23552, 32768, 32768, 
11264, 23552, 32768, 32768, 
11264, 23552, 32768, 32768, 
13312, 23552, 32768, 32768, 
13312, 23552, 32768, 32768, 
15360, 23552, 32768, 32768, 
15360, 23552, 32768, 32768, 
17408, 23552, 32768, 32768, 
17408, 23552, 32768, 32768, 
19456, 23552, 32768, 32768, 
19456, 23552, 32768, 32768, 
21504, 23552, 32768, 32768, 
21504, 23552, 32768, 32768, 
23552, 23552, 32768, 32768, 
23552, 23552, 32768, 32768, 
25600, 23552, 32768, 32768, 
25600, 23552, 32768, 32768, 
27648, 23552, 32768, 32768, 
27648, 23552, 32768, 32768, 
29696, 23552, 32768, 32768, 
29696, 23552, 32768, 32768, 
31744, 23552, 32768, 32768, 
31744, 23552, 32768, 32768, 
1024, 25600, 32768, 32768, 
1024, 25600, 32768, 32768, 
3072, 25600, 32768, 32768, 
3072, 25600, 32768, 32768, 
5120, 25600, 32768, 32768, 
5120, 25600, 32768, 32768, 
7168, 25600, 32768, 32768, 
7168, 25600, 32768, 32768, 
9216, 25600, 32768, 32768, 
9216, 25600, 32768, 32768, 
11264, 25600, 32768, 32768, 
11264, 25600, 32768, 32768, 
13312, 25600, 32768, 32768, 
13312, 25600, 32768, 32768, 
15360, 25600, 32768, 32768, 
15360, 25600, 32768, 32768, 
17408, 25600, 32768, 32768, 
17408, 25600, 32768, 32768, 
19456, 25600, 32768, 32768, 
19456, 25600, 32768, 32768, 
21504, 25600, 32768, 32768, 
21504, 25600, 32768, 32768, 
23552, 25600, 32768, 32768, 
23552, 25600, 32768, 32768, 
25600, 25600, 32768, 32768, 
25600, 25600, 32768, 32768, 
27648, 25600, 32768, 32768, 
27648, 25600, 32768, 32768, 
29696, 25600, 32768, 32768, 
29696, 25600, 32768, 32768, 
31744, 25600, 32768, 32768, 
31744, 25600, 32768, 32768, 
1024, 27648, 32768, 32768, 
1024, 27648, 32768, 32768, 
3072, 27648, 32768, 32768, 
3072, 27648, 32768, 32768, 
5120, 27648, 32768, 32768, 
5120, 27648, 32768, 32768, 
7168, 27648, 32768, 32768, 
7168, 27648, 32768, 32768, 
9216, 27648, 32768, 32768, 
9216, 27648, 32768, 32768, 
11264, 27648, 32768, 32768, 
11264, 27648, 32768, 32768, 
13312, 27648, 32768, 32768, 
13312, 27648, 32768, 32768, 
15360, 27648, 32768, 32768, 
15360, 27648, 32768, 32768, 
17408, 27648, 32768, 32768, 
17408, 27648, 32768, 32768, 
19456, 27648, 32768, 32768, 
19456, 27648, 32768, 32768, 
21504, 27648, 32768, 32768, 
21504, 27648, 32768, 32768, 
23552, 27648, 32768, 32768, 
23552, 27648, 32768, 32768, 
25600, 27648, 32768, 32768, 
25600, 27648, 32768, 32768, 
27648, 27648, 32768, 32768, 
27648, 27648, 32768, 32768, 
29696, 27648, 32768, 32768, 
29696, 27648, 32768, 32768, 
31744, 27648, 32768, 32768, 
31744, 27648, 32768, 32768, 
1024, 29696, 32768, 32768, 
1024, 29696, 32768, 32768, 
3072, 29696, 32768, 32768, 
3072, 29696, 32768, 32768, 
5120, 29696, 32768, 32768, 
5120, 29696, 32768, 32768, 
7168, 29696, 32768, 32768, 
7168, 29696, 32768, 32768, 
9216, 29696, 32768, 32768, 
9216, 29696, 32768, 32768, 
11264, 29696, 32768, 32768, 
11264, 29696, 32768, 32768, 
13312, 29696, 32768, 32768, 
13312, 29696, 32768, 32768, 
15360, 29696, 32768, 32768, 
15360, 29696, 32768, 32768, 
17408, 29696, 32768, 32768, 
17408, 29696, 32768, 32768, 
19456, 29696, 32768, 32768, 
19456, 29696, 32768, 32768, 
21504, 29696, 32768, 32768, 
21504, 29696, 32768, 32768, 
23552, 29696, 32768, 32768, 
23552, 29696, 32768, 32768, 
25600, 29696, 32768, 32768, 
25600, 29696, 32768, 32768, 
27648, 29696, 32768, 32768, 
27648, 29696, 32768, 32768, 
29696, 29696, 32768, 32768, 
29696, 29696, 32768, 32768, 
31744, 29696, 32768, 32768, 
31744, 29696, 32768, 32768, 
1024, 31744, 32768, 32768, 
1024, 31744, 32768, 32768, 
3072, 31744, 32768, 32768, 
3072, 31744, 32768, 32768, 
5120, 31744, 32768, 32768, 
5120, 31744, 32768, 32768, 
7168, 31744, 32768, 32768, 
7168, 31744, 32768, 32768, 
9216, 31744, 32768, 32768, 
9216, 31744, 32768, 32768, 
11264, 31744, 32768, 32768, 
11264, 31744, 32768, 32768, 
13312, 31744, 32768, 32768, 
13312, 31744, 32768, 32768, 
15360, 31744, 32768, 32768, 
15360, 31744, 32768, 32768, 
17408, 31744, 32768, 32768, 
17408, 31744, 32768, 32768, 
19456, 31744, 32768, 32768, 
19456, 31744, 32768, 32768, 
21504, 31744, 32768, 32768, 
21504, 31744, 32768, 32768, 
23552, 31744, 32768, 32768, 
23552, 31744, 32768, 32768, 
25600, 31744, 32768, 32768, 
25600, 31744, 32768, 32768, 
27648, 31744, 32768, 32768, 
27648, 31744, 32768, 32768, 
29696, 31744, 32768, 32768, 
29696, 31744, 32768, 32768, 
31744, 31744, 32768, 32768, 
31744, 31744, 32768, 32768, 
2048, 2048, 32768, 32768, 
2048, 2048, 32768, 32768, 
2048, 2048, 32768, 32768, 
2048, 2048, 32768, 32768, 
2048, 2048, 32768, 32768, 
2048, 2048, 32768, 32768, 
6144, 2048, 32768, 32768, 
6144, 2048, 32768, 32768, 
6144, 2048, 32768, 32768, 
6144, 2048, 32768, 32768, 
6144, 2048, 32768, 32768, 
6144, 2048, 32768, 32768, 
10240, 2048, 32768, 32768, 
10240, 2048, 32768, 32768, 
10240, 2048, 32768, 32768, 
10240, 2048, 32768, 32768, 
10240, 2048, 32768, 32768, 
10240, 2048, 32768, 32768, 
14336, 2048, 32768, 32768, 
14336, 2048, 32768, 32768, 
14336, 2048, 32768, 32768, 
14336, 2048, 32768, 32768, 
14336, 2048, 32768, 32768, 
14336, 2048, 32768, 32768, 
18432, 2048, 32768, 32768, 
18432, 2048, 32768, 32768, 
18432, 2048, 32768, 32768, 
18432, 2048, 32768, 32768, 
18432, 2048, 32768, 32768, 
18432, 2048, 32768, 32768, 
22528, 2048, 32768, 32768, 
22528, 2048, 32768, 32768, 
22528, 2048, 32768, 32768, 
22528, 2048, 32768, 32768, 
22528, 2048, 32768, 32768, 
22528, 2048, 32768, 32768, 
26624, 2048, 32768, 32768, 
26624, 2048, 32768, 32768, 
26624, 2048, 32768, 32768, 
26624, 2048, 32768, 32768, 
26624, 2048, 32768, 32768, 
26624, 2048, 32768, 32768, 
30720, 2048, 32768, 32768, 
30720, 2048, 32768, 32768, 
30720, 2048, 32768, 32768, 
30720, 2048, 32768, 32768, 
30720, 2048, 32768, 32768, 
30720, 2048, 32768, 32768, 
2048, 6144, 32768, 32768, 
2048, 6144, 32768, 32768, 
2048, 6144, 32768, 32768, 
2048, 6144, 32768, 32768, 
2048, 6144, 32768, 32768, 
2048, 6144, 32768, 32768, 
6144, 6144, 32768, 32768, 
6144, 6144, 32768, 32768, 
6144, 6144, 32768, 32768, 
6144, 6144, 32768, 32768, 
6144, 6144, 32768, 32768, 
6144, 6144, 32768, 32768, 
10240, 6144, 32768, 32768, 
10240, 6144, 32768, 32768, 
10240, 6144, 32768, 32768, 
10240, 6144, 32768, 32768, 
10240, 6144, 32768, 32768, 
10240, 6144, 32768, 32768, 
14336, 6144, 32768, 32768, 
14336, 6144, 32768, 32768, 
14336, 6144, 32768, 32768, 
14336, 6144, 32768, 32768, 
14336, 6144, 32768, 32768, 
14336, 6144, 32768, 32768, 
18432, 6144, 32768, 32768, 
18432, 6144, 32768, 32768, 
18432, 6144, 32768, 32768, 
18432, 6144, 32768, 32768, 
18432, 6144, 32768, 32768, 
18432, 6144, 32768, 32768, 
22528, 6144, 32768, 32768, 
22528, 6144, 32768, 32768, 
22528, 6144, 32768, 32768, 
22528, 6144, 32768, 32768, 
22528, 6144, 32768, 32768, 
22528, 6144, 32768, 32768, 
26624, 6144, 32768, 32768, 
26624, 6144, 32768, 32768, 
26624, 6144, 32768, 32768, 
26624, 6144, 32768, 32768, 
26624, 6144, 32768, 32768, 
26624, 6144, 32768, 32768, 
30720, 6144, 32768, 32768, 
30720, 6144, 32768, 32768, 
30720, 6144, 32768, 32768, 
30720, 6144, 32768, 32768, 
30720, 6144, 32768, 32768, 
30720, 6144, 32768, 32768, 
2048, 10240, 32768, 32768, 
2048, 10240, 32768, 32768, 
2048, 10240, 32768, 32768, 
2048, 10240, 32768, 32768, 
2048, 10240, 32768, 32768, 
2048, 10240, 32768, 32768, 
6144, 10240, 32768, 32768, 
6144, 10240, 32768, 32768, 
6144, 10240, 32768, 32768, 
6144, 10240, 32768, 32768, 
6144, 10240, 32768, 32768, 
6144, 10240, 32768, 32768, 
10240, 10240, 32768, 32768, 
10240, 10240, 32768, 32768, 
10240, 10240, 32768, 32768, 
10240, 10240, 32768, 32768, 
10240, 10240, 32768, 32768, 
10240, 10240, 32768, 32768, 
14336, 10240, 32768, 32768, 
14336, 10240, 32768, 32768, 
14336, 10240, 32768, 32768, 
14336, 10240, 32768, 32768, 
14336, 10240, 32768, 32768, 
14336, 10240, 32768, 32768, 
18432, 10240, 32768, 32768, 
18432, 10240, 32768, 32768, 
18432, 10240, 32768, 32768, 
18432, 10240, 32768, 32768, 
18432, 10240, 32768, 32768, 
18432, 10240, 32768, 32768, 
22528, 10240, 32768, 32768, 
22528, 10240, 32768, 32768, 
22528, 10240, 32768, 32768, 
22528, 10240, 32768, 32768, 
22528, 10240, 32768, 32768, 
22528, 10240, 32768, 32768, 
26624, 10240, 32768, 32768, 
26624, 10240, 32768, 32768, 
26624, 10240, 32768, 32768, 
26624, 10240, 32768, 32768, 
26624, 10240, 32768, 32768, 
26624, 10240, 32768, 32768, 
30720, 10240, 32768, 32768, 
30720, 10240, 32768, 32768, 
30720, 10240, 32768, 32768, 
30720, 10240, 32768, 32768, 
30720, 10240, 32768, 32768, 
30720, 10240, 32768, 32768, 
2048, 14336, 32768, 32768, 
2048, 14336, 32768, 32768, 
2048, 14336, 32768, 32768, 
2048, 14336, 32768, 32768, 
2048, 14336, 32768, 32768, 
2048, 14336, 32768, 32768, 
6144, 14336, 32768, 32768, 
6144, 14336, 32768, 32768, 
6144, 14336, 32768, 32768, 
6144, 14336, 32768, 32768, 
6144, 14336, 32768, 32768, 
6144, 14336, 32768, 32768, 
10240, 14336, 32768, 32768, 
10240, 14336, 32768, 32768, 
10240, 14336, 32768, 32768, 
10240, 14336, 32768, 32768, 
10240, 14336, 32768, 32768, 
10240, 14336, 32768, 32768, 
14336, 14336, 32768, 32768, 
14336, 14336, 32768, 32768, 
14336, 14336, 32768, 32768, 
14336, 14336, 32768, 32768, 
14336, 14336, 32768, 32768, 
14336, 14336, 32768, 32768, 
18432, 14336, 32768, 32768, 
18432, 14336, 32768, 32768, 
18432, 14336, 32768, 32768, 
18432, 14336, 32768, 32768, 
18432, 14336, 32768, 32768, 
18432, 14336, 32768, 32768, 
22528, 14336, 32768, 32768, 
22528, 14336, 32768, 32768, 
22528, 14336, 32768, 32768, 
22528, 14336, 32768, 32768, 
22528, 14336, 32768, 32768, 
22528, 14336, 32768, 32768, 
26624, 14336, 32768, 32768, 
26624, 14336, 32768, 32768, 
26624, 14336, 32768, 32768, 
26624, 14336, 32768, 32768, 
26624, 14336, 32768, 32768, 
26624, 14336, 32768, 32768, 
30720, 14336, 32768, 32768, 
30720, 14336, 32768, 32768, 
30720, 14336, 32768, 32768, 
30720, 14336, 32768, 32768, 
30720, 14336, 32768, 32768, 
30720, 14336, 32768, 32768, 
2048, 18432, 32768, 32768, 
2048, 18432, 32768, 32768, 
2048, 18432, 32768, 32768, 
2048, 18432, 32768, 32768, 
2048, 18432, 32768, 32768, 
2048, 18432, 32768, 32768, 
6144, 18432, 32768, 32768, 
6144, 18432, 32768, 32768, 
6144, 18432, 32768, 32768, 
6144, 18432, 32768, 32768, 
6144, 18432, 32768, 32768, 
6144, 18432, 32768, 32768, 
10240, 18432, 32768, 32768, 
10240, 18432, 32768, 32768, 
10240, 18432, 32768, 32768, 
10240, 18432, 32768, 32768, 
10240, 18432, 32768, 32768, 
10240, 18432, 32768, 32768, 
14336, 18432, 32768, 32768, 
14336, 18432, 32768, 32768, 
14336, 18432, 32768, 32768, 
14336, 18432, 32768, 32768, 
14336, 18432, 32768, 32768, 
14336, 18432, 32768, 32768, 
18432, 18432, 32768, 32768, 
18432, 18432, 32768, 32768, 
18432, 18432, 32768, 32768, 
18432, 18432, 32768, 32768, 
18432, 18432, 32768, 32768, 
18432, 18432, 32768, 32768, 
22528, 18432, 32768, 32768, 
22528, 18432, 32768, 32768, 
22528, 18432, 32768, 32768, 
22528, 18432, 32768, 32768, 
22528, 18432, 32768, 32768, 
22528, 18432, 32768, 32768, 
26624, 18432, 32768, 32768, 
26624, 18432, 32768, 32768, 
26624, 18432, 32768, 32768, 
26624, 18432, 32768, 32768, 
26624, 18432, 32768, 32768, 
26624, 18432, 32768, 32768, 
30720, 18432, 32768, 32768, 
30720, 18432, 32768, 32768, 
30720, 18432, 32768, 32768, 
30720, 18432, 32768, 32768, 
30720, 18432, 32768, 32768, 
30720, 18432, 32768, 32768, 
2048, 22528, 32768, 32768, 
2048, 22528, 32768, 32768, 
2048, 22528, 32768, 32768, 
2048, 22528, 32768, 32768, 
2048, 22528, 32768, 32768, 
2048, 22528, 32768, 32768, 
6144, 22528, 32768, 32768, 
6144, 22528, 32768, 32768, 
6144, 22528, 32768, 32768, 
6144, 22528, 32768, 32768, 
6144, 22528, 32768, 32768, 
6144, 22528, 32768, 32768, 
10240, 22528, 32768, 32768, 
10240, 22528, 32768, 32768, 
10240, 22528, 32768, 32768, 
10240, 22528, 32768, 32768, 
10240, 22528, 32768, 32768, 
10240, 22528, 32768, 32768, 
14336, 22528, 32768, 32768, 
14336, 22528, 32768, 32768, 
14336, 22528, 32768, 32768, 
14336, 22528, 32768, 32768, 
14336, 22528, 32768, 32768, 
14336, 22528, 32768, 32768, 
18432, 22528, 32768, 32768, 
18432, 22528, 32768, 32768, 
18432, 22528, 32768, 32768, 
18432, 22528, 32768, 32768, 
18432, 22528, 32768, 32768, 
18432, 22528, 32768, 32768, 
22528, 22528, 32768, 32768, 
22528, 22528, 32768, 32768, 
22528, 22528, 32768, 32768, 
22528, 22528, 32768, 32768, 
22528, 22528, 32768, 32768, 
22528, 22528, 32768, 32768, 
26624, 22528, 32768, 32768, 
26624, 22528, 32768, 32768, 
26624, 22528, 32768, 32768, 
26624, 22528, 32768, 32768, 
26624, 22528, 32768, 32768, 
26624, 22528, 32768, 32768, 
30720, 22528, 32768, 32768, 
30720, 22528, 32768, 32768, 
30720, 22528, 32768, 32768, 
30720, 22528, 32768, 32768, 
30720, 22528, 32768, 32768, 
30720, 22528, 32768, 32768, 
2048, 26624, 32768, 32768, 
2048, 26624, 32768, 32768, 
2048, 26624, 32768, 32768, 
2048, 26624, 32768, 32768, 
2048, 26624, 32768, 32768, 
2048, 26624, 32768, 32768, 
6144, 26624, 32768, 32768, 
6144, 26624, 32768, 32768, 
6144, 26624, 32768, 32768, 
6144, 26624, 32768, 32768, 
6144, 26624, 32768, 32768, 
6144, 26624, 32768, 32768, 
10240, 26624, 32768, 32768, 
10240, 26624, 32768, 32768, 
10240, 26624, 32768, 32768, 
10240, 26624, 32768, 32768, 
10240, 26624, 32768, 32768, 
10240, 26624, 32768, 32768, 
14336, 26624, 32768, 32768, 
14336, 26624, 32768, 32768, 
14336, 26624, 32768, 32768, 
14336, 26624, 32768, 32768, 
14336, 26624, 32768, 32768, 
14336, 26624, 32768, 32768, 
18432, 26624, 32768, 32768, 
18432, 26624, 32768, 32768, 
18432, 26624, 32768, 32768, 
18432, 26624, 32768, 32768, 
18432, 26624, 32768, 32768, 
18432, 26624, 32768, 32768, 
22528, 26624, 32768, 32768, 
22528, 26624, 32768, 32768, 
22528, 26624, 32768, 32768, 
22528, 26624, 32768, 32768, 
22528, 26624, 32768, 32768, 
22528, 26624, 32768, 32768, 
26624, 26624, 32768, 32768, 
26624, 26624, 32768, 32768, 
26624, 26624, 32768, 32768, 
26624, 26624, 32768, 32768, 
26624, 26624, 32768, 32768, 
26624, 26624, 32768, 32768, 
30720, 26624, 32768, 32768, 
30720, 26624, 32768, 32768, 
30720, 26624, 32768, 32768, 
30720, 26624, 32768, 32768, 
30720, 26624, 32768, 32768, 
30720, 26624, 32768, 32768, 
2048, 30720, 32768, 32768, 
2048, 30720, 32768, 32768, 
2048, 30720, 32768, 32768, 
2048, 30720, 32768, 32768, 
2048, 30720, 32768, 32768, 
2048, 30720, 32768, 32768, 
6144, 30720, 32768, 32768, 
6144, 30720, 32768, 32768, 
6144, 30720, 32768, 32768, 
6144, 30720, 32768, 32768, 
6144, 30720, 32768, 32768, 
6144, 30720, 32768, 32768, 
10240, 30720, 32768, 32768, 
10240, 30720, 32768, 32768, 
10240, 30720, 32768, 32768, 
10240, 30720, 32768, 32768, 
10240, 30720, 32768, 32768, 
10240, 30720, 32768, 32768, 
14336, 30720, 32768, 32768, 
14336, 30720, 32768, 32768, 
14336, 30720, 32768, 32768, 
14336, 30720, 32768, 32768, 
14336, 30720, 32768, 32768, 
14336, 30720, 32768, 32768, 
18432, 30720, 32768, 32768, 
18432, 30720, 32768, 32768, 
18432, 30720, 32768, 32768, 
18432, 30720, 32768, 32768, 
18432, 30720, 32768, 32768, 
18432, 30720, 32768, 32768, 
22528, 30720, 32768, 32768, 
22528, 30720, 32768, 32768, 
22528, 30720, 32768, 32768, 
22528, 30720, 32768, 32768, 
22528, 30720, 32768, 32768, 
22528, 30720, 32768, 32768, 
26624, 30720, 32768, 32768, 
26624, 30720, 32768, 32768, 
26624, 30720, 32768, 32768, 
26624, 30720, 32768, 32768, 
26624, 30720, 32768, 32768, 
26624, 30720, 32768, 32768, 
30720, 30720, 32768, 32768, 
30720, 30720, 32768, 32768, 
30720, 30720, 32768, 32768, 
30720, 30720, 32768, 32768, 
30720, 30720, 32768, 32768, 
30720, 30720, 32768, 32768, 
    };