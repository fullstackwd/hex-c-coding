#include "holberton.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * return - void
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			if (b < (size - 1) - a)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
