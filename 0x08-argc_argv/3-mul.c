#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiple two integers received as command line arguments
* @argc: number of command line arguments
* @argv: array containing all command line arguments
*
* Return: 1 on Error (insufficient arguments), 0 on success
*/

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc < 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", (num1 * num2));
	return (0);
}