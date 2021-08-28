#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @u: pointer to letters
 * Return: capital letters
 */
char *string_toupper(char *u)
{
	int a = 0;

	while (u[a] != '\0')
	{
		if (u[a] >= 'a' && u[a] <= 'z')
		{
			u[a] = u[a] - 32;
		}
		a++;
	}
	return (u);
}
