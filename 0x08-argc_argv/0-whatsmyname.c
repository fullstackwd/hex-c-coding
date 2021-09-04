#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: length of argv
 * @argv: pointer to char of arguments
 * Description: prints program name from argv)?
 * Return: 0 (SUCCESS)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s", argv[0]);
	printf("\n");

	return (0);
}