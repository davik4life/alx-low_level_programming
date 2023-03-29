#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: This is the input parameter string.
 * @src: This is the input parameter string
 * @n: This is the times of iterations
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}

	b = 0;

	while (src[b] != 0 && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
