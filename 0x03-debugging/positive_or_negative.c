#include "main.h"

/**
 * positive_or_negative - This will check if a number is positive or negative
 * @i : integer 
 * Return: 0 always
 */

void positive_or_negative(int i)
{
	int i;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	
}
