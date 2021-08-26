#include "holberton.h"

/**
 * _atoi - converts a string into an integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int n = 1;
	unsigned int num = 0;

	for (; *s; s++)
	{
		if (*s >= '0' && *s <= '9')
		{
			num = num * 10;
			num = num + *s - '0';
		}
		else if (num > 0)
			break;
		else if (*s == '-')
			n = n * -1;
	}
	return (num * n);
}
