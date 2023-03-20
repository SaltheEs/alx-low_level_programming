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
	char letter = scanf("%c", &letter);

	putchar(tolower(letter));

	return (0);
}
