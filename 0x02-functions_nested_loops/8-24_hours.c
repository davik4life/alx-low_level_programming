#include "main.h"

/**
 * jack_bauer - Prints every minutes of the day of Jack Bauer.
 *
 * Return: Gives back the minutes of the day.
 */

void jack_bauer(void)
{
	int hours, min;

	for (hours = 0; hours < 24; hours++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
