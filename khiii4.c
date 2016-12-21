#include <stdio.h>
#include <string.h>
#include <math.h>

void itoa(int n, char s[]);
main()
{
	int x = 777;
	printf("%d\n", x);
	char s[99];
	itoa(x, s);
	printf("%s\n", s);
}

void itoa(int n, char s[])
{
	int i, sign = 1;
	i = 0;
	if (n < 0) {
		sign = -1;
	}
	do {
		s[i++] = sign*(n % 10) + '0';
	} while (sign*(n /= 10) > 0);
	if (sign < 0) {
		s[i++] = '-';
	}
	s[i] = '\0';
	strrev(s);
}