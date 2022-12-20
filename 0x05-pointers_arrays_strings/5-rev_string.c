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

	int i, c;

	c = 0;
	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		tmp = s[i];
		s[i] = s[c];
		s[c] = tmp;
	}
}
