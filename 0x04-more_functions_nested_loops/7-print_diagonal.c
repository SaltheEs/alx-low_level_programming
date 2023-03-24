#include "main.h"

/**
 * print_diagonal - print n diagonals
 * @n: number of diagonals
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			for (j = 1; j <= (n - 1); j++)
				_putchar (' ');
			_putchar (92);
		}
		else if (n == 1)
			_putchar (92);
	}
	_putchar ('\n');
}
