#include <stdio.h>

/**
 *main - Print lowercase a-z
 *Return: Always 0 (Successful!!!)
 */

int main(void)
{
	char alphab = 'a';

	while (alphab <= 'z')
	{
		putchar(alphab);
		alphab++;
	}
	putchar('\n');

	return (0);
}
