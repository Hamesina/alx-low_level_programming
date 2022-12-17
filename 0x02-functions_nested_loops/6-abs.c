#include "main.h"
/**
 * _abs - absolute value
 *
 * @int: integer
 * Return: number
 */
int _abs(int)
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
