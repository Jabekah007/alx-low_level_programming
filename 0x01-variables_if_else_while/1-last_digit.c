#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - program will assign a random number to the variable
 * Return: (0) - Successful!!!
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %i is %i and is ", n, (n % 10));

	if ((n % 10) == 0)
	{
		printf("0\n");
	}
	else if ((n % 10) > 5)
	{
		printf("greater than 5\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
