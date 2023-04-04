#include "main.h"

/**
 * _strchr - this function locates a character in a string
 *
 * @s: the string used to check in the paramenter
 * @c: the character we are looking for
 *
 * Return: a pointer of the character @c wherever it occurs first in the string
 * @s. It will return NULL if the character is absent.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
