#include <stdio.h>

/* write a function setbits(x,p,n,y) which converts the last n bits of x to the last n bits of y 
helper creates a bit string of 1s everywhere except in the n spaces to the right of the pth place 
x & helper sets those bits of x to 0 
~0 << n creates a bit string of n zeros at the right end and 1s elsewhere 
inverting that gives me a bit string of n 1s at the right and 0s elsewhere 
anding that with y will give me the last n bits of y and zeros elsewhere 
i shift that over n-p 
then I or that with x */


int setbits(unsigned x, int p, int n, unsigned int y);
main()
{
	unsigned x = 0b10101010101;
	unsigned y = 0b11111111111111;
	int p = 8;
	int n = 4;
	printf("%u", setbits(x,p,n,y));
}

int setbits(unsigned x, int p, int n, unsigned int y)
{
	unsigned helper;
	helper = ~(~0 << p) ^ (~0 << (p-n)); 
	return ((x & helper)  | (((~(~0 << n)) & y) << (p-n)));
} 