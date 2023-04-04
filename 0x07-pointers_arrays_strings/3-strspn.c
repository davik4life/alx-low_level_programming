#include "main.h"

/**
 * _strspn - this function gets the length of a prefix substring
 * @s: this is the segment to return bytes from
 * @accept: this is the bytes to include
 *
 * Return: this is the number of bytes in the initial segment of @s which 
 * consist only of bytes from @accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);

	}
	return (c);
}
