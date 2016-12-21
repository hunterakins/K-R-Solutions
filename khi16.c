#include <stdio.h>


/* print out the length of lines of aribtrarily many characters (i.e. lines longer than the 1000 char max)....check*/
/* the second challenge confuses me: get the program to print out as much of the text as possible: possible interpretations
1. Print out as much non blank space as possible 2. print out the line with the most characters (presumably the first), unlikely
interpretation 3. somehow copy multiple lines of the text...allocate more memory... */

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);
main()
{
	int i, len, overlen; /* current line length */
	int max; /* biggest line length so far */
	char line[MAXLINE]; /* current input line*/
	char longest[MAXLINE]; /* longest line saved here */
	char templongest[MAXLINE]; /* holder to extend printable text for real long line */

	max = 0;
	len = 0;
	overlen = 0;
	while ((len = getline(line, MAXLINE)) > 0){
		if (line[len-1] != '\n'){
			copy(templongest, line);
			overlen = overlen + len;
		}
		else if ((line[len-1] = '\n') && (len + overlen > max)) {
			max = len + overlen;
			copy(longest, line);
			overlen = 0;
		}
		else {
			overlen = 0;;
		}
	}
	printf("%d\n", max);
	for (i = 0; i < max; ++i){
		printf("%c", templongest[i]);
	
	for (i = 0; i < max; ++i){
		printf("%c", longest[i]);	
	}
}

/* read a line into s, return the length */
int getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && ((c = getchar()) != EOF) && (c != '\n'); ++i){
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++ i;
	}
	s[i] = '\0';
	return i;
}	


void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0'){;
		++ i;
	}
}

