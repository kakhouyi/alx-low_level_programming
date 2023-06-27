#include <stdio.h>
#include "main.h"

/**
 * print_array - function print other caracter
 * @a: a caracter
 * @n: a number
 * return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
