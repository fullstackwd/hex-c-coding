#include "holberton.h"

/**
 * _strcpy - copies string to another string
 * @dest: string 1
 * @src: string 2
 * Return: string copy
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; a <= _strlen(src); a++)
		dest[a] = src[a];
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
