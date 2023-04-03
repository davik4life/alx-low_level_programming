#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed by s
 *
 * @s: This is the buffer parameter.
 * @b: This is the contstant byte.
 * @n: This is the bytes of the memory area.
 *
 * Return: a Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
