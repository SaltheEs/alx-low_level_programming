#include "main.h"

/**
 * Main - Entry point
 *
 * Description: This programme will print _putchar in stdout
 *
 * Return: Always 0 (Success)
*/

int main(void) :
{
	char word[] = "_putchar";
	int i;

	for (i = 0, i < 8; i++)
		_putchar (word[i]);
	_putchar ('\n');

	return (0);
}
