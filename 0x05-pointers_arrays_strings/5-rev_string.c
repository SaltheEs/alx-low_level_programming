#include "main.h"

/**
 * rev_string - reverses a char
 * @s: the string to be reversed
*/

void rev_string(char *s)
{
	int i = 0;
	int j, q;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}
	q = i - 1;
	for (j = 0; q >= 0 && j < q; q--, j++)
	{
		c = s[j];
		s[j] = s[q];
		s[q] = c;
	}
}
