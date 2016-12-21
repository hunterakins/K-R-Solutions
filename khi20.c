#include <stdio.h>
#include "khich1.h"

#define MAXLINE 1000

/* OVERVIEW: REPLACES TAB CHARACTERS IN THE INPUT WITH THE EQUIVALENT NUMBER OF BLANKS
EXAMPLE: IF N = 10; INPUT = "'H''E''L''L''O''\T'", OUTPUT = "'H''E''L''L''O'' '' '' '' '' '". 

WHILE (THERE ARE MORE LINES):
	PRINT OUT LINE WITH BLANKS INSTEAD OF TABS
PRINT OUT THE LAST LINE WITH BLANKS INSTEAD OF TABS

USE MAIN TO CALL FUNCTION DETAB, WHICH TAKES IN A LINE OF INPUT AND RETURNS THE LINE LENGTH AFTERWARDS. 
DETAB KEEPS TRACK OF CHARACTER SPACES IN A LINE WITH A LOCAL PARAMETER I. 
WHEN A TAB CHARACTER IS ENCOUNTERED, DETAB COMPUTES THE NUMBER OF SPACES TO THE NEXT TAB STOP.
	A FOR LOOP OUTPUTS BLANKS UNTIL THE NEXT TAB STOP IS REACHED. DETAB CONTINUES ON UNTIL FINDING '\N' OR EOF.
WHEN DETAB ENCOUNTERS '\N', IT RETURNS THE LINE LENGTH.
IF DETAB ENCOUNTERS EOF, IT RETURNS '\0'. 


WHEN MAIN'S CALL TO DETAB ENCOUNTERS A '\0', IT PRINTS OUT THE LAST LINE OF INPUT
*/

int detab(char line[], int maxline, int stoplength);

main()
{
	char line[MAXLINE];  /* current line of output, to be filled by detab /*
	int c  /* c is detabs output, which is the length of the line OR '/0' if it's the last line of INPUT */
	int stoplength; /* distance between tab stops */
	int maxline;
	int c, i;

	maxline = MAXLINE;
	stoplength = STOP;

	while ((c = detab(line, maxline, stoplength)) != '\0') {
		for (i = 0; i < c ; ++i) {
			putchar(line[i]);
		}	
	}
	i = 0;
	while (line[i] != '\0') {
		putchar(line[i]);
		++i;
	}
}

int detab(char s[], int lim, int stop)
{
	int c, i, dist, j;

	i = 0;
	while ((i < lim - 1) && ((c = getchar()) != EOF)) {
		if (c != '\t' && c != '\n') {
			s[i] = c;
			++i;
		}
		else if (c == '\t') {
			dist = (stop*(i/stop + 1) - i);   /* computes number of spaces to the next stop. i/stop is int division, so returns the current stop number 
			e.g. if i = 26 and stop = 10, i / 26 = 2. then dist = (10*(3) - 26) = 4, the correct number of spaces to the next stop */
			j = i;
			while (j < i + dist) {
				s[j] =  ' ';
				++j; 
			}
			i = j;
		}
		else if (c == '\n') {
			s[i] = c;
			++i;
			return i;
		}
	}
	s[i] = '\0';
	return '\0';
}


