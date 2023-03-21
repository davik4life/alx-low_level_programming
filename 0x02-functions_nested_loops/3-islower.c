#include <stdio.h>
#include <ctype.h>

/**
 * Main - Checks for lowercase Character.
 *
 * Return 0 otherwise.
 *
 */

int _islower(int c);

int main(void)
{
	int r;

    	r = _islower('H');
    	_putchar(r + '0');
    	r = _islower('o');
    	_putchar(r + '0');
    	r = _islower(108);
    	_putchar(r + '0');
    	_putchar('\n');
	_islower(c);
	return 0;
}

int _islower(int c)
{
	if(r == islower(c))
	{ 
		return 1;
	}
	return 0;
}
