#include<stdio.h>
#include "main.h"

/**
 * *_strncpy - function
 * @dest: a caracter
 * @src: another caracter
 * @n: a number
 * Return: always dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}

	for (; i < n; i++)
	{
	dest[i] = '\0';
	}

	return (dest);
}
