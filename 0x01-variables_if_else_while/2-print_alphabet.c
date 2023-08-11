#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Use 'putchar' function to print the alphabets in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
