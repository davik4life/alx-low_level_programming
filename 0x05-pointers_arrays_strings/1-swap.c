#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Here's the first pointer variable parameter.
 * @b: Here's the second pointer variable parameter.
 *
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
