#include "holberton.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string
 * Return: encoded rot13 string
 */
char *rot13(char *s)
{
	int a, b = 0;
	char eng[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[b] != '\0')
	{
		for (a = 0; a <= 52; a++)
		{
			if (s[b] == eng[a])
			{
				s[b] = rot[a];
				break;
			}
		}
		b++;
	}
	return (s);
}
