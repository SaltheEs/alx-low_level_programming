#include "main.h"

/**
 * swap_int - swaps values of 2 ints
 * @a: the first value
 * @b: the second value
 *
*/

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
