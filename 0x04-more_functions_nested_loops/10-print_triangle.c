#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = size - i; j > 1; j--)
			_putchar(' ');
		for (k = i; k > 0; k--)
			_putchar('#');
		_putchar('\n');
	}
}
