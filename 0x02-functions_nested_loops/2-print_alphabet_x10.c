#include <stdio.h>

/**
 * Main - Prints 10 times almphabet in lowercase
 *
 * Return  0;
 *
 */

void print_alphabet_x10(void)
{
        for(int i = 0; i < 10; i++)
        {
                char i;
                for(i = 'a'; i <= 'z'; i++)
                {
                        putchar(i);
                }
		putchar('\n');
        }

}

int main(void)
{
	print_alphabet_x10();
	return 0;
}

