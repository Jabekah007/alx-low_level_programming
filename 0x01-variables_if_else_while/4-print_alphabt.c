#include <stdio.h>

/**
 *main - print lowercase alpha a-z but remove 'q' and 'e'
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alphab = 'a';

	while (alphab <= 'z')
	{
		if ((alphab != 'q') && (alphab != 'e'))
		{
			putchar(alphab);
		}
		alphab++;
	}
	putchar('\n');

	return (0);
}
