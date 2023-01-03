#include "main.h"
/**
 * cap_string - capitalizes
 * @str: string
 * Return: the string
 */
char *cap_string(char *str)
{
	int i, j;

	char spe[13] = {32, 9, 10, 44, 59, 46, '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((i == 0 || str[i - 1] == spe[j]) && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
		}
	}
	return (str);
}
