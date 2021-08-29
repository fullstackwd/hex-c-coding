#include "holberton.h"

/**
 * _pow_recursion - raises the value of x by the power of y
 * @x: base number
 * @y: exponent
 * Return: powered value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
