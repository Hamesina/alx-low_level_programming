#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print
 * Return: if it is not satisfying the condition
 * @n: numbr
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j < n)
				printf("%d, ", k);
			else
				printf("%d", k);
		}
		if (i < n)
			printf("\n");
	}
}

