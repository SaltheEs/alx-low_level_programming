#include "main.h"

/**
 * print_last_digit - gives us the last digit in a number n
 * @n: is the given number
 * Return: lst that contains the last digit
*/
int print_last_digit(int n)
{
	int lst;

	if (n >= 0)
	{
		lst = n % 10;
	}
	else
	{
		n = -n;
		lst = n % 10;
	}
	_putchar (lst + '0');
	return (lst);
}
