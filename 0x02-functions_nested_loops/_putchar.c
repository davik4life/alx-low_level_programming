#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout.
 * c: This is the character to print.
 *
 * Return: When succesful returns 1.
 * Return: With error, return -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
