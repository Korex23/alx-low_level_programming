#include "main.h"

/**
 * puts_half - prints the last half of the string
 * @str: string
 */

void puts_half(char *str)
{
	int lenght = strlen(str);
	int start, i;

	if (lenght % 2 == 0)
		start = lenght / 2;
	else
		start = (lenght - 1) / 2;
	for (i = start; i < lenght; i++;)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
