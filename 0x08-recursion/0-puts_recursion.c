#include "main.h"

/**
 * _puts_recursion - Prints a String followed by a line.
 * @s: the parameter that prints the string.
 *
 * Return: 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
