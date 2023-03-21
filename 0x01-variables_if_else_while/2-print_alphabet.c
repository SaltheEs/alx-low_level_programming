#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: this programme will print with puts and not printf
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(tolower('A' + i));
	}
	putchar("\n")

	return (0);
}
