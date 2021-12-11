/**
 * array_range - a function that creates an array of integers.
 * @min: int
 * @max: int
 * Return: pointer
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int *array_range(int min, int max)
{
	int *ptr;
	int i, range;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min + 1;
	ptr = malloc(sizeof(int) * range);

	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < range)
	{
		ptr[i] = min++;
		i++;
	}
	return (ptr);
}
