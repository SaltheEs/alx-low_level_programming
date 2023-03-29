#include "main.h"

/**
 * _puts - sends a str to stdout
 * @str: the string to be outputed
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
