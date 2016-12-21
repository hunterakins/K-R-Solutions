#include <stdio.h>
/* sooo basically takes in a character stream and replaces each chunk of blank spaces by a single blank space */

main()

{
	int c, nl;
	
	nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			while (c == ' ') {
			c = getchar();	
			}
		putchar(' ');
		putchar(c);
		}
		else {
			putchar(c);			
		}
	}
	
;}
