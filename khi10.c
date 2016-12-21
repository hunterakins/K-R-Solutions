#include <stdio.h>

/* takes in stream and replaces each tab by \t, backspace by \b, and backslash by \\ */


main()

{
	int c;
	
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			printf("\\");
			printf("t");
		} 
		else if (c == '\b') {
			printf("\\");
			printf("b");
		}
		else if (c == '\\') {
			printf("\\\\");
		}
		else {
		putchar(c);			
		}
	}
}
