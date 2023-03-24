#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase..
 * @c: This is the input character
 * Return: 1 if true, 0 otherwise..
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
