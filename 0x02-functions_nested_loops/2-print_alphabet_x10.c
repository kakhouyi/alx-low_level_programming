#include<stdio.h>

/**
* print_alphabet_x10 - print all alphabets 10 times
*
* description: 'the program's description'
*
* Return:
*/

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
		{
			putchar(letter);
		}
		putchar('\n');

	}
}
