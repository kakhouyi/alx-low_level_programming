#include <stdio.h>

/**
 * main - sbar
 * description Entry point
 * Return: Always 0 (Success)
 *
 */

int main(void)
{

	int i;
	char l;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');
	return (0);
}
