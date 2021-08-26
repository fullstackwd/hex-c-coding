#include "holberton.h"

/**
 * swap_int - swaps integers
 * @a: integer
 * @b: another integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
