#include <stdio.h>

/*write a function rightrot that takes in the number x and rotates it by n bits (i.e. rightrot(1001110, 2) = 1010011) */
/* strategy: select the last n bits and write them somewhere (OR them with a bunch of zeros). gotta push those over by 32-n. then push over the remaining bits by n. or those two bits together. */ 

unsigned rightrot(unsigned x, int n);
main()
{
	unsigned x;
	int n;
	x = 0b1100011;
	n = 2;
	printf("%u\n", rightrot(x, n));
}

unsigned rightrot(unsigned x, int n)
{
	unsigned left;
	unsigned right;
	left = x << 32-n;
	right = x >> n;
	return left | right;
}

