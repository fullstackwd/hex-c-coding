#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: length of argv[]
 * @argv: pointer to char of arguments
 * Description: prints all arguments given)?
 * Return: 0 (SUCCESS)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}