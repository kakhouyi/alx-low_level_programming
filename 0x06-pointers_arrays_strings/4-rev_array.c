#include<stdio.h>
#include "main.h"

/**
 * reverse_array - function
 * @a: a caracter
 * @n: another caracter
 * Return: always dest
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
	int temp = a[start];

	a[start] = a[end];
	a[end] = temp;

	start++;
	end--;
	}
}
