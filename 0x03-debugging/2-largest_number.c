#include "main.h"
/**
 * largest_number - prints the karest of three numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a < b)
	{
		if (c > b)
			largest = c;
		else
			largest = b;
	}
	else if (a < c)
		largest = c;
	else
		largest = a;
	return (largest);
}

