#include "main.h"

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char i;

	for(i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
