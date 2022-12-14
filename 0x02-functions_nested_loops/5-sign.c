#include "main.h"
/**
 * print_sign - is it positive or is it not
 * @n: the number to be evaluated
 *
 * Return: 0 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
