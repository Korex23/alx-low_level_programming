#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 3;
	char c;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar('\n');
		}
		i++;
	}
	_putchar('\n');
}
