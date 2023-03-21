#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this programme will print nums from 0 to 10
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 9; i >= 0; i--)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
