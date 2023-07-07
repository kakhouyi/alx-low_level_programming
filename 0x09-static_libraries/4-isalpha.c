#include "main.h"

/**
* _isalpha - print
* @c: is The caracter to check
* Return:  1 for lowercase or 0 for anything
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
