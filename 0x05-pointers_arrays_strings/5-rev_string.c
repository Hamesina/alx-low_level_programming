#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string
 * Return: 0
 */
void rev_string(char *s)
{
	char tmp;

	int i, l1, l2;

	while (s[l1] != '\0')
		l1++;
	l2 = l1 - 1;
	for (i = 0; i < l1; i++)
	{
		tmp = s[i];
		s[i] = s[l2];
		s[l2] = tmp;
		l2--;
	}
}

