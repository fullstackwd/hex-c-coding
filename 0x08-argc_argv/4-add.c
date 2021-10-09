#include "holberton.h"
#include <stdlib.h>
#include <ctype.h>
/**
* main - adds positive numbers
* @argc: lenght of argv
* @argv: array contents
* Return: 0 if no add, 1 if is not a number
*/
int main(int argc, char *argv[])
{
	int result, i;

	result = 0;
	if (argc < 1)
		printf("%d\n", 0);
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[argc]);
	}
	printf("%d\n", result);
	return (0);
}
