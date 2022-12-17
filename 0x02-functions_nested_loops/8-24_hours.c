#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minute of the days
 */
void jack_bauer(void)
{
	int hour;

	int minute = 0;

	for (hour = 0; hour <= 23; hour++)
	{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((minute / 10) + '0');
		_putchar((minute % 10) + '0');
		_putchar('\n');
	}
}
