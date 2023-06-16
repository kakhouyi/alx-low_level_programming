#include <stdio.h>

int main(void)
{
	/*declare a variabe*/

	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		/*print the value of the variabe*/

		if(alphabet != 'e' && alphabet != 'q') putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
