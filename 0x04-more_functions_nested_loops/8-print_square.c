#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = size; i > 0; i--)
		{
			for (j = i; j > 0; j--)
				_putchar('*');
			_putchar('\n');
		}
	}
}
