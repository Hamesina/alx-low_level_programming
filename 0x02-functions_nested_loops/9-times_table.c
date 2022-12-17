#include "main.h"
#include <stdio.h>
/**
 * times_table - returns the time table
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			_putchar(k + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
			_putchar('\n');
	}
}

