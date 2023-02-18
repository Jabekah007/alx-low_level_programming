#include <stdio.h>

/**
 *main - print 0123456789
 *Return: Always 0 (Success)
 */

int main(void)
{
	int v = 0;

	while (v < 10)
	{
		printf("%i", v);
		v++;
	}
	putchar('\n');

	return (0);
}
