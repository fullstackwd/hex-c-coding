#include "holberton.h"

/**
 * leet - encodes a string into 1337(leet)
 * @s: string
 * Return: encoded leet string
 */
char *leet(char *s)
{
	int b, a = 0;
	char eng[] = "aAeEoOtTlL";
	char lt[] = "4433007711";

	while (s[a] != '\0')
	{
		for (b = 0; b <= 10; b++)
		{
			if (s[a] == eng[b])
				s[a] = lt[b];
		}
		a++;
	}
	return (s);
}
