#include "main.h"
#include <stdio.h>

/**
 * print_rev - check the code
 * @s: a character
 * Return: 0
 */
void print_rev(char *s)

{
	char *ptr = s;

	while (*ptr != '\0')
	{
	ptr++;
	}
	while (ptr != s)
	{
	ptr--;
	putchar(*ptr);
	}
	putchar('\n');
}
