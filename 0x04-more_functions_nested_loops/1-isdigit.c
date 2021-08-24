#include "holberton.h"

/**
 * _isdigit - checks for digits 0-9
 * @c: numbers
 * Return: 1 if c, 0 for everything else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
