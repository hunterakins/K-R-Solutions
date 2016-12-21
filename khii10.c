#include <stdio.h>

/* lower takes in a string and converts upper case letters to lower case, using the ternary expression syntax. 
STRATEGY: if the char value of the character is between 65 and 89 inclusive, it's upper case, add 26 to it.  */

void lower();
main()
{
	lower();	
}

void lower()
{
	char c;
 	while ((c = getchar()) != EOF) {
 		((c >= 65) & (c <= 89)) ? putchar(c + 32) : putchar(c);
 	}
}

