#include "main.h"
#include <unistd.h>
/**
 * _putchar - wrietes the character to stdout
 *
 * Return: On success 1
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
