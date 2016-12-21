#include <stdio.h>

#define IN 0
#define OUT 1
#define MAX 20

main()
{
	int c, count, i, j, state, big, charcount;
	int nlen[MAX];

	
	state = OUT;
		for (i = 0; i < MAX; ++i)
			nlen[i] = 0;
		count = 0;
		while ((c = getchar()) != EOF){
			if (state == OUT && (c==' ' || c == '\n' || c == '\t')){
				;
			}
			else if (c == ' ' || c == '\n' || c == '\t'){
				state == OUT;
				++nlen[count];
				count = 0;
			}
			else if (state == OUT){
				state = IN;
				++count;
			}
			else {
				++count;
			}
		}
		++nlen[count];
		i = 0;
		for (i = 0; i < MAX; ++i)
			if (i < 10){
				printf("%d", 0);
				printf("%d ", i);
			}
			else {
				printf("%d ", i);
			}
		printf("\n");
		i = 0;
		big = nlen[0];
		while (i < MAX){
			if (nlen[i] > big){
				big = nlen[i];
				++i;}
			else {
				++i;
			}
		}
		while (big > 0){
			charcount = 0;
			while (charcount < 3*MAX){
				i = charcount/3;
				if (nlen[i] > 0){
					printf("a  ");
					charcount = charcount + 3;
					--nlen[i]; 
				}
				else {
					printf("   ");
					charcount = charcount + 3;
				}
			}
		printf("\n");
		--big;
		}
}
	