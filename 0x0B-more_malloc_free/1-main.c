#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *, char *, unsigned int);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = string_nconcat("Holberton ", "School", 4);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
