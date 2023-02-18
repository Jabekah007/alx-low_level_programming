#include <stdio.h>

/**
 *main - print alphabet reversed using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alphab = 'z';

	while (alphab >= 'a')
	{
		putchar(alphab);
		alphab--;
	}
	putchar('\n');

	return (0);
}
