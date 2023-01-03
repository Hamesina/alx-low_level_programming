#include "main.h"
/**
 * leet - encodes the string
 * @str: string
 * Return: the string
 */
char *leet(char *str)
{
	int i, j;

	char *a = "aAeEoOtTlL";

	char *b = "4433007711";

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == a[j])
				str[i] = b[j];
		}
	}
	return (str);
}
