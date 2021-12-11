/**
 * string_nconcat - a function that concatenates 2 strings.
 * @str: strin, for length function.
 * Return: pointer
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

unsigned int length(char *str);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int len, a, b, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = length(s1);
	arr = malloc(sizeof(char) * (len + n + 1));

	if (arr == NULL)
	{
		return (NULL);
	}
	i  = 0;
	for (b = 0; b < len; b++)
	{
		arr[i] = s1[b];
		i++;
	}
	for (a = 0; a < n; a++)
	{
		arr[i] = s2[a];
		i++;
		if (s2[a] == '\0')
		{
			return (arr);
		}
	}
	arr[i] = '\0';
	return (arr);
}

/**
 * length - calculate string length
 * @str: string
 * Return: unsigned int
 */

unsigned int length(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
