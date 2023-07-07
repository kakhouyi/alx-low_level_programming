#include "main.h"
/**
 * _memcpy -function fills memory with a constant byte
 * @dest: number
 * @src: number
 * @n: number
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
	dest[r] = src[r];
	n--;
	}
	return (dest);
}
