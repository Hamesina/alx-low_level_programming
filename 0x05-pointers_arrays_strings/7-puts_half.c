#include "main.h"
#include <string.h>
/**
 * puts_half - prints the last half of the string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i, n;

	n = strlen(str);
	for (i = 0; i < n; i++)
	{
		if (i > (n - 1) / 2)
			_putchar(str[i]);
	}
	_putchar('\n');
}
