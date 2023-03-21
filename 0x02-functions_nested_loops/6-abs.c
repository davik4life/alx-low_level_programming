#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @n: This is the integer to be calculated.
 *
 * Return: Provides the absolute value of the given integer.
 *
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (n * -1);
}
