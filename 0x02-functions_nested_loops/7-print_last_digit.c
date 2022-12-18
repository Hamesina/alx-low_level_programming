#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 * Return: 0
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	printf("%d", ld);
	return (0);
}
