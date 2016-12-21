#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int htoi(char s[]);
main()
{
	char s[] = "bb";
	printf("%d", (htoi(s)));	
}


int htoi(char s[])
{
	/* ascii value of */
	int i;
	long int final;
	final = 0;
	i = 0;
	while (s[i] != '\0') {
		if ('0' <= s[i] && s[i] <= '9') {
			final = 16*final + (s[i] - '0');
			++ i;
		}
		else if (s[i] >= 'a' && s[i] <= 'f') {
			final = 16*final + (s[i] - 'a' + 10);
			++i;
		}
		else {
			final = 16*final + (s[i] - 'A' + 10);
			++i;
		}
	}
	return final;
}
