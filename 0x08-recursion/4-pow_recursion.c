#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: first parameter indicating the value to be raised.
 * @y: second parameter indicating the value to be raised by.
 *
 * Return: the final Value.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * (_pow_recursion(x, y - 1)));
}
