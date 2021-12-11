/**
 * malloc_checked - a function that allocates memory and returns pointer
 * @b: integer
 * Return: pointer
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = (unsigned int *)malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
