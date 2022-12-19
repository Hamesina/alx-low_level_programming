#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - print in reverse order
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
