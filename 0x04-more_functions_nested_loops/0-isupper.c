#include "holberton.h"

/**
 * _isupper - checks for uppercase letter
 * @c: uppercase letters
 * Return: 1 if c, 0 for everything else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
