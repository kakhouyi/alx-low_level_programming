#include<stdio.h>
#include "main.h"

/**
 * *_strcat - function
 * @dest: a caracter
 * @src: another caracter
 * Return: always dest
 */


char *_strcat(char *dest, char *src)

{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
	dest_ptr++;
	}

	while (*src != '\0')
	{
	*dest_ptr = *src;
	dest_ptr++;
	src++;
	}

	*dest_ptr = '\0';
	return (dest);
}
