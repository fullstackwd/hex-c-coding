#include "holberton.h"

/**
 * print_diagonal - prints diagonal line
 * @n: the number of times a character should be printed
 * Return: 0 for success
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
	else
		_putchar ('\n');
}
