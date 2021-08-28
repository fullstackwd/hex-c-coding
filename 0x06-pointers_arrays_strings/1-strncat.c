#include "holberton.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: string
 * @src: string
 * @n: number of bytes in src
 * Return: concatenated strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dlen;

	dlen = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dlen + i] = src[i];
	dest[dlen + i] = '\0';

	return (dest);
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
