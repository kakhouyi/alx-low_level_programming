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

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	i++;
	putchar('\n');

	return (0);
}
