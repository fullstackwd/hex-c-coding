#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: double pointer to argument values
 *
 * Return: pointer to new string or NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0;
	int size = 0;
	char *p;

	if (av == NULL || ac == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}

	size++;
	p = (char *)malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
																	{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}

	p[k] = '\0';
	return (p);
}
