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

	for (i = 0; i < 50; i++)
	{
		f = f + i;
		if (i < 50)
			printf("%d, ", f);
		else
			printf("%d\n", f);
	}
	return (0);
}
