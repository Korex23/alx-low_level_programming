#include "main.h"

/**
 * _islower - Checks if a letter is upper or lowercase
 * @c: Chaacter to be checked
 * Return: 1 when lowercase
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
