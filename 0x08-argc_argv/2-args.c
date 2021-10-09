#include <stdio.h>
/**
* main - prints all arguments
* @argv: array contents
* @argc: number of contents
* Return: 0
*/
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
