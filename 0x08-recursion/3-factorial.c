#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: this is the parameter of the number who's factorial is returned.
 *
 * Return: int value.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
