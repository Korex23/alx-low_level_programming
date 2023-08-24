#include "main.h"

/**
 * print_array - prints an array of lenghr n
 * @a: array to be printed
 * @n: lenght of array
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
