#include "main.h"
/**
 * *_strcat - conctenates two strings
 * @dest: destination string
 * @src: the string to be concatenated
 * Return: pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[i] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
