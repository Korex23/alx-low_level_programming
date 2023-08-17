#include "main.h"

/**
 * more_numbers - prints 0-14 10 times
 */
void more_numbers(void)
{
	int c, n;

	for (n = 1; n <= 10; n++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
