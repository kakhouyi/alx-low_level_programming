#include "main.h"

/**
* print_last_digit- print sigh of number
* @n: a number
*
* * Return: 0
*/

int print_last_digit(int n)
{

	int r;

	r = n % 10;
	if (n < 0)
	{
		r = r * -1;
	}
	_putchar(r + '0');
	return (r);
}
