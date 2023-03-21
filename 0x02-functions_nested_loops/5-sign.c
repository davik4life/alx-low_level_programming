#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 *
 * @n: ensures i computer with ASCII codes.
 *
 * Return: 1 and prints + if n is greater than zero, or 0 and prins 0 if n is
 * zero or -1 and prints - if n is less than zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}

