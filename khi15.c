#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20.0

float fahrentocels(float fahren);
main()
{
	float i;
	i = LOWER;
	while (i <= UPPER){
		printf("%f \t", i);
		printf("%f", fahrentocels(i));
		printf("\n");
		i = i + STEP;
	}
}


float fahrentocels(float fahren)
{
	return(5.0/9)*(fahren - 32);
}
