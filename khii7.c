#include <stdio.h>

/* write invert(x,p,n) which inverts the n bits to the right of the pth bit */
/* STRATEGY: generate a bitstring which is zeros everywhere except in the p to p-n bits
then i want a logical function such that the truth table is :
input       my helper bitstring       output
1       |   1                     |   0
1       |   0                     |   1 
0       |   1                     |   1
0       |   0                     |   0

that looks likes the negation of exclusive or! done */


unsigned invert(unsigned x, int p, int n);
main()
{
	unsigned x = 0b111000111000111000;
	int p = 12;
	int n = 6;
	printf("%u", invert(x, p, n));
}


unsigned invert(unsigned x, int p, int n)
{
	unsigned helper;
	helper = ~(~0 << p) ^ (~0 << (p-n));
	return ~(x ^ helper); 	
} 