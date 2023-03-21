#include <stdio.h>

/*
 * Main - Prints the alphabet in lowercase.
 *
 * Return Void.
 *
 */

void print_alphabet(void);

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
