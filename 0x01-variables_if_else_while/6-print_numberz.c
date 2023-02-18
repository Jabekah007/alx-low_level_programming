#include <stdio.h>

/**
 *main - print 0123456789 using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int h = '0';

	while (h <= '9')
	{
		putchar(h);
		h++;
	}
	putchar('\n');

	return (0);
}
