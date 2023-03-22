#include "main.h"

/**
 * _islower - checks if for lowercase characters
 * @c: is the character to test
 * Return: 1 if lowcase, otherwise 0
*/
int _islower(int c)
{
	if (c >= 'a' && c  <= 'z')
		return (1);
	else
		return (0);
}
