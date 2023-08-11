#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints out the alphabets in lowercase then in uppercase
 * Return: Always 0 (Succeess)
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	for (letters = 'A'; letters <= 'Z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
