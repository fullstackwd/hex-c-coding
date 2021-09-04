#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Find the sum of a set of integers input as
*	command line arguments
* @argc: the number of command line arguments
* @argv: an array containing all command line arguments
*
* Return: 1 on Error resulting from alpha character interruption
*	0 on successful print
*/

int main(int argc, char *argv[])
{
	int i, x, t, num;

	t = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x] != 00; x++)
		{
			if (isdigit(argv[i][x]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		num = (atoi(argv[i]));
		t = t + num;
	}
	printf("%d\n", t);
	return (0);
}