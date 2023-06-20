#include "main.h"

/**
*  print_sig n- print sigh of number
* @n: is The caracter to check
* Return:  1 for positive and -1 for negative and 0 for zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n > 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
