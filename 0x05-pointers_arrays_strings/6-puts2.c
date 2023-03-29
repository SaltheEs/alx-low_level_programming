#include "main.h"

/**
 * puts2 - prints every other char in a string
 * @str: the string in question
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
