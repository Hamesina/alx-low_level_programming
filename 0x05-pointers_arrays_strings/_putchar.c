#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character to stdout
 * @c: char
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
