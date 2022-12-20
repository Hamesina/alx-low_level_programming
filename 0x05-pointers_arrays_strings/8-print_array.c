#include "main.h"
#include <stdio.h>
/**
 * print_array - prints all the elements in the array
 * @a: array
 * @n: number values the array is holding
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[n]);
		else
			printf("%d", a[n]);
	}
	printf("\n");
}
