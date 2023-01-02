#include "main.h"
#include <string.h>
/**
 * *_strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number
 * Return: poinnter to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	dest = strncpy(dest, src, n);
	return (dest);
}
