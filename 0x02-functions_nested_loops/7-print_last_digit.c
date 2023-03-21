#include "main.h"

/**
 * print_last_digit - Prints the value of the last digit.
 *
 * @n: This is the int name used to compute the value.
 *
 * Return: The value of the last digit.
 */

int print_last_digit(int n)
{
	int lastNumber = n % 10;

	if (lastNumber < 0)
	{
		_putchar(-lastNumber + 48);
		return (-lastNumber);
	}
	_putchar(lastNumber + 48);
	return (lastNumber);
}
