#include "main.h"

/**
 * _islower - Checks for lowercase Character.
 *
 * @c: This would be computed using ASCII numbers.
 *
 * Return: 1 if lowercase character, return 0 otherwise.
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
