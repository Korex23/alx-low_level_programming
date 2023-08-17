#include "main.h"

/**
 * _isupper - checks if a number is upper or lowercase
 * @c: Charachter yo be checked
 * Return: 1 if alphabet
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
