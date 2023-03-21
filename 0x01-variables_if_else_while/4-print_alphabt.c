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

	for (i = 0; i < 26; i++)
	{
		if (lt == 'e' || lt == 'q')
			putchar('');
		else
			putchar(tolower(lt + i));
	}
	putchar('\n');

	return (0);
}
