#include "main.h"
/**
 * _abs - absolute value
 *
 * @n: integer
 * Return: number
 */
int _abs(int n)
{
	if (n > 0)
	{
		n = n;
	}
	else if (n == 0)
	{
		n = 0;
	}
	else
	{
		n = n * (-1);
	}
	return (n);
}
