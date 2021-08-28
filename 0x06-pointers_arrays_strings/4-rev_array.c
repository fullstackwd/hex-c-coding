#include "holberton.h"

/**
 * reverse_array - reverses the content of an array
 * @a: an array of integers
 * @n: the number of elements in an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, s = 0;

	while (s < n - 1)
	{
		temp = a[s];
		a[s] = a[n - 1];
		a[n - 1] = temp;
		s++;
		n--;
	}
}
