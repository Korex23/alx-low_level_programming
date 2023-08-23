#include "main.h"

/**
 * _strlen - returns the lenght f a string
 * @s:  string to be checked
 * Return: Lenght of the string
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++
	}
	return (lenght);
}
