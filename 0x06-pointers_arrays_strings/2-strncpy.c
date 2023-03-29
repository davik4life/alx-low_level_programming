#include "main.h"

/**
 * _strncpy - This function copies the string
 * @dest: this is the returned array.
 * @src: the pointer that receive the string
 * @n: No. of times to interate
 *
 * Return: the parameter dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
