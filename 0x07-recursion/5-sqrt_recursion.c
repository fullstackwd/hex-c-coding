#include "holberton.h"

/**
 * sq_finder - finds the square root of a number
 * @n: square root
 * @i: integer
 * Return: 1 for square root, 0 if not a square root, -1 if # less than 0
 */
int sq_finder(int n, int i)
{
	if (n == i * i)
		return (i);
	if (i * i > n)
		return (-1);

	return (sq_finder(n, i + 1));
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: a number
 * Return: square root of number or -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sq_finder(n, 1));
}
