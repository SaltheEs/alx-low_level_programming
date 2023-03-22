#include "main.h"

/**
 * _abs - gives us the absolute value of a number
 * @n: is the number to be cheched
 * Return: abs if n is lower than 0, otherwise n
*/
int _abs(int n)
{
	int abs;

	if (n < 0)
	{
		abs = n * (-1);
		return (abs);
	}
	else
		return (n);
}

