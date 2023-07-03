#include "main.h"
/**
 * _memset -function fills memory with a constant byte
 * @s: number
 * @n: number
 * @b: number
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
