#include "main.h"

/**
 * puts2 - prints every other char in a string
 * @str: the string in question
*/

void puts2(char *str)
{
	int i;

	for (int i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
