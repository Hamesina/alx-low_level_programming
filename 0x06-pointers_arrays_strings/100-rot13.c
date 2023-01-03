#include "main.h"
/**
 * rot13 -encodes a string in rot 13
 * @str: string
 * Return: the string
 */
char *rot13(char *str)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMabcdefghijklm";

	char b[] = "NOPQRSTUVWXYZnopqrstuvwxyz";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
		}
	}
	return (str);
}
