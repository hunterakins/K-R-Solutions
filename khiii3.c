#include <stdio.h>

/* INPUT: one string containing phrases which consist of a 
	1) two letters separated by a dash
	2) tw0 numbers separated by a dash
	3) possible a preceding dash
	one string into which to write the expanded form of those shorthands above
OUTPUT: void 
STRATEGY:
WHILE THE CURRENT CHARACTER IS NOT THE EOF character
	IF not in a shorthand:
		IF the character is a letter:
			BEGINNING = the letter
			IN is true
			END is the character after the dash
			FOR (i = 'letter', blah blah);
		IF the char is a num, do something similar;
*/

void escape(char s1[], char s2[]);
main()
{
	char c;
	int i = 0;
	int j = 0;
	char s1[] = "a-z";
	char s2[1000];

	escape(s1, s2);
	while (s1[j++] != EOF) {
		printf("%c", s2[j]);
	}
}

void escape(char s1[], char s2[])
{
	int i = 0;    /* counter for spot in s1 */
	int j = 0;	  /* counter for copying things into s2 */
	int z = 0;    /* current spot in s2 */
	int k = 0;    /* counter for elements between the shorthand limits (set to zero at every for loop) */
	int in = 0;   
	int out = 1;
	char curr, beginning, end;

	while ((curr = s1[i]) != EOF) {	
		beginning = curr;
		printf("Curr = ");
		if (curr >= 97 && curr <= 122) {
			++i;
			end = s1[++i];
			k = 0;	
			for (j = z; j < z + (end - beginning); ++j, ++z, ++k) {        
				s2[j] = beginning + k;
			}
		}
		else if (curr >= 65 && curr <= 89) {
			++i;
			end = s1[++i];
			k = 0;
			for (j = z; j < z + (end - beginning); ++j, ++z, ++k) {        
				s2[j] = beginning + k;         
			}
		}
		else if ((curr == '-') && (curr >= 48 && curr <= 57)) {
			beginning = -s1[++i];
			++i;
			end = s1[++i];
			for (j = z; j < z + (end - beginning); ++j, ++z, ++k) {        
				s2[j] = beginning + k;         
			}
		}
		else if (curr >= 48 && curr <= 57) {
			beginning = s1[i++];
			end = s1[++i];
			for (j = z; j < z + (end - beginning); ++j, ++z, ++k) {        
				s2[j] = beginning + k;  
			}
		}
	}
}