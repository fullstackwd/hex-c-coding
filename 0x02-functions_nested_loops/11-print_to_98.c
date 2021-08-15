#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers to 98
 * @n: number
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		printf("%d\n", n);
		return;
	}
	printf("98\n");
}
