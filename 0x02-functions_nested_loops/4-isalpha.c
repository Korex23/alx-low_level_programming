#include "main.h"

/**
 * _isalpha - checks if a character is a letter
 * @c: Character we're checking
 * Return: 1 if letter
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
