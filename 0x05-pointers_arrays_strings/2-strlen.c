#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 * @s: a character
 * Return: 0
 */
int _strlen(char *s)

{
	int l;

	l = 0;

	while (*s != '\0')
	{
	l++;
	s++;
	}
	return (l);
}
