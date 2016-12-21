#include <stdio.h>



int any(char s1[], char s2[]);
main() 
{
	char s1[] = "hey my name is hunter";
	char s2[] = "12345jjj";
	printf("%d", any(s1, s2));
}


int any(char s1[], char s2[])
{
	int i = 0;
	int j;
	while (s1[i] != '\0') {
		j = 0;
		while ((s2[j] != '\0') && (s1[i] != s2[j++])) {
		}
		if (s1[i] == s2[--j]) {
			return i;
		}
		else {
			++i;
		}
	}
	return -1;
}