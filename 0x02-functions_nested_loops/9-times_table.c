#include "main.h"

/**
 * times_table - prints all 9 tables each in a line
*/
void times_table(void)
{
	int i, j, p;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			p = i * j;
			if (p >= 10)
			{
				_putchar ((p / 10) + '0');
				_putchar ((p % 10) + '0');
			}
			else
			{
				_putchar ((p % 10) + '0');
			}
			if (j != 9)
			{
				if (p < 10)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
				}
				else
				{
					_putchar (',');
					_putchar (' ');
				}
			}
		}
		_putchar ('\n');
	}
}
