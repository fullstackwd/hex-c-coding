#include "holberton.h"

/**
 * print_line - prints straight line
 * @n: the number of times a character should be printed
 * Return: 0 for success
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar ('_');
			a++;
		}
		_putchar ('\n');
	}
	else if (n <= 0)
		_putchar ('\n');
}
