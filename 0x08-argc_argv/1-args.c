#include <stdio.h>

/**
* main - print number of command line arguments
* @argc: number of command line arguments
* @argv: array containing command line arguments
*
* Return: 0 on successful print
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}