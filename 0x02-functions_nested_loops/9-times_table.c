#include "main.h"

/**
 * times_table - prints all 9 tables each in a line
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar ((i + '0') * (j + '0') + '0');
			_putchar (',');
			_putchar (' ');
			_putchar (' ');
		}
		_putchar ('\n');
	}
}
