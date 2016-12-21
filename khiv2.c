#include <stdio.h>
#include <ctype.h>
#include <math.h>

/* atof: convert string s to double f */
main()
{
	double atofl(char s[]);
	char *s = "-1077e-2";
	printf("%f\n", atofl(s));
}

double atofl(char s[])
{
	int i;
	double val;
	double sign = 1.0;
	int scisign = 1;
	double power = 1.0;
	int point = 0;
	int sci = 0;
	int expon;
	for (i = 0; isspace(s[i]); ++i)
		;
	sign = (s[i] == '-') ? -1.0 : 1.0;
	if ((s[i] == '+') || (s[i] == '-')) {
		++i;
	}
	for (val = 0.0; isdigit(s[i]); ++i)
		val = 10.0*val + (s[i] - '0');
	if (s[i] == '.') {
		++i;
		point = 1;
	}	
	if (s[i] == 'e') {
		++i;
		sci = 1;
	}
	if (point == 1) {
		for (i = i;isdigit(s[i]); ++i) {
			val = 10.0*val + (s[i] - '0');
			power *= 10.0;
		}
	}
	if (sci == 1) {
		if (s[i] == '-') {
			scisign = -1;
			++i;
		}
		for(expon = 1; isdigit(s[i]); ++i);
			expon = 10*expon + (s[i] - '0');
		printf("%d\n", expon);
		return sign * val * pow(10, scisign*expon);
	}
	return  sign * val / power;
}
