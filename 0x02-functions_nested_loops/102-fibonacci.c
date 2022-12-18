#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int i;

	int a = 0;

	int b = 1;

	int sum;

	for (i = 0; i < 50; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (i < 49)
			printf("%d, ", sum);
		else
			printf("%d\n", sum);
	}
	return (0);
}
