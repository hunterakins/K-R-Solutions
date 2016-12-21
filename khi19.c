#include <stdio.h>

#define MAXLINE 1000


int reverseline(char line[], char newline[], int maxline);
main()
{
	char line[MAXLINE];
	char newline[MAXLINE];
	int c, i;

	while ((c = reverseline(line, newline, MAXLINE)) != '\0') {
		for (i = 0; i < c + 1 ; ++i) {
			putchar(newline[i]);
		}
		c = reverseline(line, newline, MAXLINE);	
	}
	i = 0;
	while ((newline[i]) != '\0') {
		putchar(newline[i]);
		++i;
	}
}


int reverseline(char s[], char t[], int lim)
{

	int c, i, j;

	for(i = 0; (i < lim - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		t[i] = c;
		for(j = 0; j < i; ++j) {
			t[j] = s[i - 1 -j]; 
		}
		return i;
	}
	else {
		for(j = 0; j < i; ++j) {
			t[j] = s[i - 1 -j]; 
		}
		return '\0';
	}
}