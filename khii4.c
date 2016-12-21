#include <stdio.h>

/* remove characters from the string s1 if they appear in the string s2 */

void squeeze(char s1[], char s2[]);
main()
{
	char s1[] = "hey man how's it goingh";
	char s2[] = "ha";
	squeeze(s1, s2);
	printf("%s", s1);
}

void squeeze(char s1[], char s2[])
{
	int j,i,k;
	i = 0;
	k = 0;
	while (s1[i] != '\0') {
		j = 0;
		while ((s2[j] != '\0') && (s1[i] != s2[j++])) {
		}
		if (s1[i] == s2[--j]) {
			++i;
		} 
		else {
			s1[k++] = s1[i++];
		}
	}
	s1[k] = '\0';
}



