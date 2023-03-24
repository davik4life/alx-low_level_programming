#include "main.h"

/**
 * print_most_numbers - prints the numbers from (0 - 9) followed by a new line.
 * Return: 0
 */
void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
