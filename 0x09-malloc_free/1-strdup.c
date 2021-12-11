#include "holberton.h"
#include <stdlib.h>

/**
* *_strdup - returns a pointer to a newly allocated space in memory
* @str: string
* Return: a pointer to a newly allocated space in memory
**/

char *_strdup(char *str)
{
	char *s;
	int i, n = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		n++;

	s = malloc((n + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		s[i] = str[i];
	s[n] = '\0';
	return (s);
}
