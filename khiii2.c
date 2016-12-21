#include <stdio.h>


void escape(char s[], char t[]);
main()
{
	char s[1000];
	char t[1000];
	int i = 0;
	char c;
	while ((c = getchar()) != EOF) {
		t[i++] = c;
	}
	escape(s, t);
	printf("%s\n", s);
	printf("%s\n", t);
}

void escape(char s[], char t[])
{
	int i = 0;
	int j = 0;
	char c;
	while ((c = t[j++]) != EOF) {
		switch (c) {
			case '\t' : s[i] = '\\'; s[++i] = 't';
				break;
			case '\n' : s[i] = '\\'; s[++i] = 'n';
				break;
			default: s[i] = c;
		}
		++i;
	}
}
