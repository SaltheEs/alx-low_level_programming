#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the 1st string
 * @s2: the 2nd string
 *
 * Return: Always result
*/

int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			result = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}

	return (result);
}
