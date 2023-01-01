#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print it 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
