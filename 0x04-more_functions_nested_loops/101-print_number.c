#include <stdio.h>
#include "main.h"
/**
 * print_number - print int number
 * @n: a number
 * Return: always 0
 */

void print_number(int n)
{
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
	if (n == 0)
	{
	_putchar('0');
	return;
	}
	if (n / 10)
	print_number(n / 10);
	_putchar(n % 10 + '0');
}

