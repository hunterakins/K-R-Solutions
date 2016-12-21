#include <stdio.h>

int bitcount(unsigned x);
main()
{
	unsigned y = 7;
	printf("%d\n", bitcount(y));
}

int bitcount(unsigned x)
{
	int i = 0;

	while (x > 0) {
		x &= (x-1); 
		++i;
	}
	return i;
}
