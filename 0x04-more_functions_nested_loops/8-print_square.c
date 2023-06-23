#include "main.h"
#include <stdio.h>

/**
 * print_square- shows the upper
 * Description, print number
 * @size: number
 * Return: Always 0.
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (a = 0; a < size; a++)
	{
	for (b = 0; b < size; b++)
	{
	putchar (35);
	}
	putchar ('\n');
	}
	}
}
