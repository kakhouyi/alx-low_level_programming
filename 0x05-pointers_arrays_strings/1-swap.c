#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: a number
 * @b: a number
 * Return:
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
