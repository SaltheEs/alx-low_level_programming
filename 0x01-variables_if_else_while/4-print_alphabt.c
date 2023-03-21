#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: this programme will print with puts and not printf
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char lt = 'a';

	while (lt <= 'z')
	{
		if (lt == 'e' || lt == 'q')
			lt++;
		putchar(lt);
		lt++;
	}
	putchar('\n');

	return (0);
}
