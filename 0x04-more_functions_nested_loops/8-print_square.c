#include "holberton.h"

/**
 * print_square - prints square
 * @size: the number of times a character should be printed
 * Return: 0 for success
 */
void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
	else
		_putchar ('\n');
}
