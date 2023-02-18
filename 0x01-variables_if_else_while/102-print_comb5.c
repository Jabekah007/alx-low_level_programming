#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones;
	int t;
	int u;

	for (tens = '0'; tens <= '9'; tens++) /*print first two digit combo*/
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
		 	for (t = tens; t <= '9'; t++) /*print second of pair*/
			{
				for (u = ones + 1; u <= '9'; u++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(t);
					putchar(u);

					if (!((tens == '9' && ones == '8') &&
					      (t == '9' && u == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				u = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
