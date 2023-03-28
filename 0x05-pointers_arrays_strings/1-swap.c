#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @*a: Here's the first pointer variable parameter.
 * @*b: Here's the second pointer variable parameter.
 * @keep: variable declared to temp store value. 
 *
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
	int keep;

	keep = *a;
	*a = *b;
	*b = keep;
}	
