/**
 * main - adds 2 positive numbers
 * intlen - recursive to calculate digits in number
 * @c: integer
 * Return: integer
 * Auth: Zivile V. Silveira
 */


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int intlen(int c);
int main(int argc, char **argv)
{
	int result, i, a, b;

	result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		a = strlen(argv[i]);
		b = intlen(atoi(argv[i]));

		if (a != b)
		{
			printf("Error\n");
			return (0);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}

/**
 * intlen - recursive to calculate digits in number
 * @c: integer
 * Return: integer
 */

int intlen(int c)
{
	if (c == 0)
	{
		return (0);
	}
	return (1 + intlen(c / 10));
}
