#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints out evry number from 0 to 9
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
