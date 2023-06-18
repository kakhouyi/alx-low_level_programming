#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
main(void)
{
	printf("char is %2d bytes \n", sizeof(char));
	printf("int is %2d bytes \n", sizeof(int));
	printf("long int is %2d bytes \n", sizeof(long int));
	printf("long long int is %2d bytes \n", sizeof(double));
	printf("signed int is %2d bytes \n", sizeof(signed int));
	printf("unsigned int is %2d bytes \n", sizeof(unsigned int));
	printf("float is %2d bytes \n", sizeof(float));
	printf("\n");
	return (0);
}
