#include "main.h"

/**
 * _strlen - counts chars in a str
 * @s: the string to be counted
 *
 * Return: Always i
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s != EOF; s++)
	{
		i++;
	}

	return (i);
}
