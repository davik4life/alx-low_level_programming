#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times alphabet in lowercase.
 *
 * Return 0;
 *
 */


void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char j;

		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}

}
