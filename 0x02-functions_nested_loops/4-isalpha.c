#include "main.h"

/**
 * _isalpha - checks is a character is a letter
 * @c: the character to be tested
 * Return: 1 in case it's a character, otherwise 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}