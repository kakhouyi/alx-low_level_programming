#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function shows the upper
 * Description, print number
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int c;

	for (; c <= 9 ; c++)
	{
	if (c == 2 || c == 4)
	{
	continue;
	}
	else
	{
	putchar (c + '0');
	}
	}
	putchar ('\n');
}
