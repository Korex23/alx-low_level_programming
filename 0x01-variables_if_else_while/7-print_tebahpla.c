#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabets in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar(reverse);
	}
	putchar('\n');
	return (0);
}
