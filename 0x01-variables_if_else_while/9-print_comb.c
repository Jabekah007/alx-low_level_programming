#include <stdio.h>

/**
 *main - print 0-9 separated with commas, using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int g = '0';

	while (g <= '9')
	{
		putchar(g);
		if (g != '9')
		{
			putchar(',');
			putchar(' ');
		}
		g++;
	}
	putchar('\n');

	return (0);
}
