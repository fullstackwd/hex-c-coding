#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: length of argv[]
 * @argv: pointer to char of arguments
 * Description: prints number of arguments passed)?
 * Return: 0 (SUCCESS)
 */

int main(int argc, char *argv[])
{
	(void)*argv;

	printf("%i", argc - 1);
	printf("\n");

	return (0);
}
