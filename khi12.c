#include <stdio.h>

main()

#define IN 1
#define OUT 0

{

int c, state;
state = OUT;
	while ((c = getchar()) != EOF){
		if ((state == OUT) && (c == ' ' || c == '\t' || c =='\n')){
			;
		}
		else if (c == ' ' || c == '\t' || c == '\n'){
			putchar('\n');
			state = OUT;
		}
		else if (state == OUT){
			state = IN;
			putchar(c);
		}
		else {
			putchar(c);
		}
	}	
}