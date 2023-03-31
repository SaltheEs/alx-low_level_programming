#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @n: the chars to take from src
 * @dest: the first 1
 * @src: the second one
 *
 * Return: Always dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int count2;

	while (dest[count])
		count++;

	for (count2 = 0; src[count2] && count2 < n; count2++)
		dest[count + count2] = src[count2];

	dest[count + count2] = '\0';

	return (dest);
}
