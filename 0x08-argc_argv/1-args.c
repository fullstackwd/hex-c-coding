#include "holberton.h"
#include <stdio.h>
/**
* main - prints number of arguments
* @argc: lenght of argv
* @argv: arguments array
* Return: 0
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
