#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
/* calls getline until getline returns a 0 (which happens when getline reaches an EOF character). meanwhile it prints out all the non /0 characters in the lines of text */
main()
{
	char line[MAXLINE]; /* current line of text */
	int c, i;

	while ((c = getline(line, MAXLINE)) != '\0') {
		for (i = 0; (i < c + 1) && line[i] != '\0'; ++i) {
			putchar(line[i]);
		}
	}
	i = 0; 
	while ((line[i]) != '\0') {
		putchar(line[i]);
		++i;
	}
}

int getline(char s[], int lim)
{
	char i, j, c; 
	lim = MAXLINE;
	for (i = 0; (i < lim - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		if (i == 0) {
			s[i] = '\0';
			return 1;
		}
		else {
			s[i] = c;
			++ i;
			j = i - 1;
			while ((s[j] == ' ') || (s[j] == '\t')) {
				s[j] = '\n';
				s[j+1] = '\0';
				--j;
			}
			return i;
		}
	}
	else {
		return '\0';
	}
}