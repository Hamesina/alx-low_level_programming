#include <stdio.h>
#include <stdlib.h>
/**
 * main - code execution
 * Return: a;ways 0
 */
int main(void)
{
	int sum = 0;

	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
