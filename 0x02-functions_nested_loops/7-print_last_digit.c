#include "holberton.h"

/**
 * print_last_digit - prints last digit of #
 * @a: integer
 * Return: d for last digit, 0 for everything else
 */
int print_last_digit(int a)
{
	int d;

	d = a % 10;

	if (d < 0)
		d = d * -1;
	_putchar (d + '0');

	if (a >= 0)
		return (d);
	else if (a < 0)
		return (d);
	return (0);
}
