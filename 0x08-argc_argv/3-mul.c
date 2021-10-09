#include "holberton.h"
#include "stdlib.h"
/**
* main - multiplies 2 numbers
* @argc: lenght of argv
* @argv: array contents
* Return: 0 if insert 2 numbers, 0 if not
*/
int main(int argc, char *argv[])
{
	int result;

	result = 0;
	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
