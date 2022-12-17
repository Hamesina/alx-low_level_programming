#include "main.h"
/**
 * _abs - absolute value
 *
 * @n: integer
 * Return: number
 */
int _abs(int n)
{
	int n;

	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * -1);
	}
}
