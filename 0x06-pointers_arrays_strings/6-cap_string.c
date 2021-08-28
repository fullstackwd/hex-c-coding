#include "holberton.h"

/**
 * cap_string - capitalize all words of a string
 * @cap: string
 * Return: capitalized words
 */
char *cap_string(char *cap)
{
	int i, j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
		      '{', '}'};

	if (cap[0] >= 'a' && cap[0] <= 'z')
		cap[0] = capitalize(cap[0]);

	for (i = 0; cap[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (cap[i] == sep[j])
			{
				cap[i + 1] = capitalize(cap[i + 1]);
			}
		}
	}
	return (cap);
}


/**
 * capitalize - capitalize lower case letters
 * @c: letter to be capitalized
 * Return: capital letter
 */

char capitalize(char c)
{
	int i;
	char lower[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
			'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
			'w', 'x', 'y', 'z'};
	char upper[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
			'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
			'W', 'X', 'Y', 'Z'};

	for (i = 0; i < 26; i++)
	{
		if (c == lower[i])
			return (upper[i]);
	}
	return (c);
}
