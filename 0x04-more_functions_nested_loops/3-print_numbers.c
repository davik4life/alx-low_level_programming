#include "main.h"

/**
 * print_numbers - prints the numbers from (0 - 9), followed by a new line.
 * Return: 0
 */

void print_numbers(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
