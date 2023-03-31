#include "main.h"

/**
 * reverse_array - reveres an array of numbers
 * @a: the array
 * @n: its size
*/

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
