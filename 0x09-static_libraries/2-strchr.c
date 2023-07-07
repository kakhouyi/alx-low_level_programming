#include<stdio.h>
#include "main.h"
/**
 * _strchr -function fills memory with a constant byte
 * @s: number
 * @c: caracter
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
	return (s + i);
	}
	return (NULL);
}
