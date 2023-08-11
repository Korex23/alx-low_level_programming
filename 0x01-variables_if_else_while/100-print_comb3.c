#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints out every possible 2 digit combination
 * Return: Always 0
 */
int main(void)
{
	int p, q;


	for (p = 0; p <= 8; p++)
	{
		for (q = p + 1; q <= 9; q++)
		{
			putchar(p + '0');
			putchar(q + '0');
			if (p == 8 && q == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
