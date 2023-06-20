#include "main.h"

/**
*  _abs- print sigh of number
* @n: is The caracter to check
* Return:  1 for positive and -1 for negative and 0 for zero
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
