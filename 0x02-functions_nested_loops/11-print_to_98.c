#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints upto 98
 *@n: number
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(n + '0');
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i++)
		{
			_putchar(n + '0');
			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
		_putchar('\n');
}
