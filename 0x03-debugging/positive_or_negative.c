#include "main.h"
/* this is to print a positive or negative int i */

void positive_or_negative(int i)
/* A positive_or_negative function */
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
