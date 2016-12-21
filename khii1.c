#include <stdio.h>

/* find out the ranges of all the variable types in C */


main()
{
	/*finding the max and min char values. the trick: declare two variables, x and y: x a char, y an int. then ++x gives me the next char in the ascii alphabet. setting y = x gives me the integer that corresponds to that char. 
	++x until y becomes negative or zero. then print out y. */
	char x;
	int y;
	unsigned char z;
	x = '0';
	y = x;
	while (y > 0) {
		++x;
		y = x;
	}
	--x;
	y = x;
	printf("Max signed char value is: ");
	printf("%d\n", y );
	++x;
	y = x;
	printf("Min signed char value is: ");
	printf("%d\n", y);
	z = '0';
	y = z;
	++z;
	y = z;
	while (y > 0) {
		++z;
		y = z;
	}
	--z;
	y = z;
	printf("Max unsigned char value is: ");
	printf("%d\n", y);
	/*finding the max int values. start at 0. 
}