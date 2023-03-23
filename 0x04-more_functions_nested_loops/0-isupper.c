#include "main.h"

/**
 * _isupper - checks if c is in uppercase
 * @c: the character to be checked
 *
 * Return: 1 if c is upercase, otherwise 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
