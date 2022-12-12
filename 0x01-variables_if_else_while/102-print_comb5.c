#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0;
 */
int main(void)
{
	int k;

	int l;

	int i;

	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++) 
		{
			if (i != 9 && j != 9)
			{
				for (k = 0; k <= 9; k++)
				{
					for (l = k + 1; l <= 9; l++)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
						if (i != 9 && j != 8)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

