#include "main.h"

/**
 * print_numbers - prints the numbers from (0 - 9), followed by a new line.
 * @i: this is the variable used within the function scope.
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
