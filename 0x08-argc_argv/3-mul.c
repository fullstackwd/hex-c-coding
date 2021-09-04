/**
 * main - multiplies 2 numbers.
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: integer
  */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}