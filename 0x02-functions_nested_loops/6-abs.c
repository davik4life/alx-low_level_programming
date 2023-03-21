#include "main.h"

/**
 * _abs: Computes the absolute value of an integer.
 *
 * @n: This is the integer to be calculated.
 *
 * Return: Returns the absolute value of the given integer and feeds the value 
 * to the main from where it is been called. 
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
