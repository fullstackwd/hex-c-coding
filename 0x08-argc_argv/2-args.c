/**
 * main - print all arguments it receives.
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: integer
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}