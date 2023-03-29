#include "main.h"

/**
 * _strcat - This function concatenates two strings
 * @dest: This is the input parameter string
 * @src: This is second input parameter string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}

	b = 0;

	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
