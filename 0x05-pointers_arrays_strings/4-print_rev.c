#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 *
*/

void print_rev(char *s)
{
	int i;

	while (s[i])
		i++;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
