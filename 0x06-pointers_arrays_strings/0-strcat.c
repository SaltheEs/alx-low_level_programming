#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: the first 1
 * @src: the second one
 *
 * Return: Always dest
*/

char *_strcat(char *dest, char *src)
{
	int count = 0;
	int count2;

	while (dest[count])
		count++;

	for (count2 = 0; src[count2]; count2++)
		dest[count++] = src[count2];

	return (dest);
}
