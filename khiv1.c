#include <stdio.h>

/* find the rightmost occurence of the character string t within the character string s and return the index where the string t begins 
STRATEGY: while s[i] not the empty string;
is s[i] == t[0]?
if so, then we are on a track;
keep checking if that's true
if it's not: then keep going along c
else, t[j] is the eof character, store it's index but keep going...
*/

int strrindex(char s[], char t[]);
main()
{
	char *s;
	char *t;
	s = "hello I'm Hunplayter and I like to play";	
	t = "play";
	printf("%d\n", strrindex(s, t));
}

int strrindex(char s[], char t[])
{
	int i,j,k;
	int found;
	int index = -1;  

	for(i = 0; s[i] != '\0'; ++i) {
		for (j = 0, k = i; (t[j] != '\0') && (s[k] == t[j]); ++j, ++ k) {   /* loop until s[k] doesn't match t[j] */
			}
		if ((j > 0) && (t[j] == '\0')) {      
			index = i;
		}
	}
	return index;
}