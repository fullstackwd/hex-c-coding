#include "holberton.h"

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
