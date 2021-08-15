#include "holberton.h"
/**
 * print_alphabet - prints alphabet from a to z, with c incrementing by 1
 * Return: the lowercase alphabet
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
