#include "holberton.h"

/**
 * puts_half - prints second half of string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int a = 0;

	for (a = (_strlen(str) + 1) / 2; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
/**
 * _strlen - gives length of a string
 * @s: string
 * Return: returns length of string
 */
int _strlen(char *s)
	{
		int l;

		l = 0;

		while (s[l])
			l++;
		return (l);
	}
