/**
 * main - print number of arguments passed and unused variable
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: integer
  */

#include <stdio.h>

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}