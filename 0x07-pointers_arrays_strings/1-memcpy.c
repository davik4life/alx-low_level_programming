#include "main.h"

/**
 * _memcpy - function copies n bytes from a memory area
 *
 * @dest: This is the buffer
 * @src: this is the source
 * @n: this is the value.
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
