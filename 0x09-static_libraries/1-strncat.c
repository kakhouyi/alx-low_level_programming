#include<stdio.h>
#include "main.h"

/**
 * *_strncat - function
 * @dest: a caracter
 * @src: another caracter
 * @n: a number
 * Return: always dest
 */


char *_strncat(char *dest, char *src, int n)

{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
	dest_ptr++;
	}

	while (*src != '\0' && n > 0)
	{
	*dest_ptr = *src;
	dest_ptr++;
	src++;
	n--;
	}

	*dest_ptr = '\0';
	return (dest);
}
