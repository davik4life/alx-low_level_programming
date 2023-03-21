#include <stdio.h>
#include "main.h"

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

int main()
{	
	print_alphabet();
	return 0;
}

void print_alphabet(void)
{
	char i;
	for(i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return;
}
