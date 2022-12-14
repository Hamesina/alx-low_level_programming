#include "main.h"
/**
 * _isalpha - checks if it is an alphabet
 * @c: the character to be checked
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}

