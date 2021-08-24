#include "holberton.h"

/**
 * print_numbers - prints numbers 0-9
 * Return: always 0
 */
void print_numbers(void)
{
	char c;

	c = '0';

	while (c <= '9')
	{
		_putchar (c);
		c++;
	}
	_putchar ('\n');
}
