#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints hex
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex;

	for (hex = 0; hex < 10; hex++)
	{
		putchar(hex + '0');
	}
	for (hex = 'a'; hex < 'g'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
