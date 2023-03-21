#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this programme will print nums from 0 to 10
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i != j && i < j)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
