#include <stdio.h>
int main(void)
{
	/**
	 * main - Entry point
	 *
	 * description: 'the program's description'
	 * @parameter: describe the parameter
	 *
	 * Return: Always 0 (Success)
	 */
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
