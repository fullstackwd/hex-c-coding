#include "holberton.h"
/**
 * string_toupper - changes lower case letters to upper case.
 * @s: string to format
 * Return: modified string.
 */
char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] = s[x] - 32;
		x++;
	}
	s[x] = '\0';

	return (s);
}