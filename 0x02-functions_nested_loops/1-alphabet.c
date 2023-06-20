#include<stdio.h>

/**
* print_alphabet - print all alphabets
*
* description: 'the program's description'
*
* Return:
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{

		putchar(letter);
	}
	putchar('\n');
}
