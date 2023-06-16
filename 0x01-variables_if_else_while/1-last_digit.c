#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* description: 'the program's description'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The last digit of %d is ", n);
	lastDigit = abs(n) % 10;

	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
