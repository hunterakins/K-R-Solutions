#include <stdio.h>
#include <string.h>
#include <math.h> 

void itob(int n, char s[], int b);
main()
{
	int x = pow(7,7) + 6*pow(7,2);
	printf("%d\n", x);
	char s[99];
	itob(x, s, 7);
	printf("%s\n", s);
}

void itob(int n, char s[], int b)
{
	int i, sign = 1;
	i = 0;
	if (n < 0) {
		sign = -1;
	}
	do {
		s[i++] = sign*(n % b) + '0';
	} while (sign*(n /= b) > 0);
	if (sign < 0) {
		s[i++] = '-';
	}
	s[i] = '\0';
	strrev(s);
}
