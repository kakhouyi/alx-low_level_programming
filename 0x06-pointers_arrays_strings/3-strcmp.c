#include<stdio.h>
#include "main.h"

/**
 * _strcmp - function
 * @s1: a caracter
 * @s2: another caracter
 * Return: always dest
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] < s2[i])
	{
	return (-15);
	}
	else
	if (s1[i] > s2[i])
	{
	return (15);
	}

	i++;
	}

	if (s1[i] == '\0' && s2[i] == '\0')
	{
	return (0);
	}
	else if (s1[i] == '\0')
	{
	return (-15);
	}
	else
	{
	return (15);
	}
}
