/**
* main - prints program name
* @argc: lenght of argv
* @argv: arguments array
* Return: it's name
*/

#include "holberton.h"
#include <stdio.h>

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}