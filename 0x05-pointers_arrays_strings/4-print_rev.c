#include "main.h"

/**
 * print_rev - prints a strign in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	char *ptr = s + _strlen(s) - 1;

	while (ptr >= s)
	{
		putchar(*ptr);
		ptr--;
	}
	putchar('\n');
}
