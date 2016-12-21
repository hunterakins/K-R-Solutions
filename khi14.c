#include <stdio.h>

/* takes in a txt file and returns a histogram of character frequency. it just loops through 
the text file and increments the ith value of my charcount array (if it's the ith ascii
character). then i just loop through the list and output the character value associated
with the ith number alonside a bunch of tally marks for each occurrence */
main()
{
	int c, x;
	int charcount, i, big;
	int chars[256];

	for (i = 0; i < 256; ++i)
		chars[i] = 0;

	while ((c = getchar()) != EOF){
		++chars[c];
	}
	big = chars[0];
	for (i = 0; i < 256; ++i){
		if (chars[i] > big){
			big = chars[i];
		}
		else {
			;
		}
	}
	for (i = 15; i < 256; ++i){
		printf("%d", i);
	}
	for (i = 0; i < big; ++i){
		printf("\n");
		charcount = 15;
		while (charcount < 256){
			if (chars[charcount] > 0){
				printf("x");
				--chars[charcount];
				++charcount;
			} 
			else {
				printf(" ");
				++charcount;
			}
		}
	}
}
		
