#include "main.h"

/**
 * _islower - Checks for lowercase Character.
 *
 * int c - This should be computed using ASCII numbers.
 *
 * Return: 0 otherwise.
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
