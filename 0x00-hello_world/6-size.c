#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this programme will print the sizes fo data types
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char chartType;
	int intType;
	float floatType;
	long int longIntType;
	long long int longLIntType;

	printf("Size of a char: %zu byte(s)\n", sizeof(chartType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLIntType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
