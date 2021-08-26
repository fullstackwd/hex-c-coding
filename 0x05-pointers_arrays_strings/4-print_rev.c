#include "holberton.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 * Return: reversed string
 */
void print_rev(char *s)
{
	int a, ln;

	for (ln = 0; *s != '\0'; s++)
		ln++;
	s--;

	for (a = 0; a < ln; a++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
