#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int f = 1;

	int i;

	int sum = 0;

	for (i = 0; i <= 50; i++)
	{
		sum = sum + f;
		f = sum;
		if (i < 50)
			printf("%d, ", f);
		else
			printf("%d\n", f);
	}
	return (0);
}
