#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, p;

	for (d = '0'; d <= '7'; d++)
	{
		for (p = d + 1; p <= '8'; p++)
		{
			for (int q = p + 1 ; q <= '9'; q++)
			{
				putchar(d);
				putchar(p);
				putchar(q);
				if (p == '8' && q == '9' && d == '7')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

