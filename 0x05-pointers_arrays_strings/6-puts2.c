#include "main.h"

/**
 * puts2 - prints every other char in a string
 * @str: the string in question
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 ==0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
