#include <unistd.h>
/**
 * _putchar - print characters
 * @c: parameter
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
