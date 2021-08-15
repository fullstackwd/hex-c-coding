#include "holberton.h"

/**
 * times_table - prints 9 times table
 * Return: 0 for success
 */
void times_table(void)
{
	int a;
	int b;
	int n;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			n = a * b;
			if (n >= 10)
			{
				_putchar(n / 10 + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
			}
				_putchar(n % 10 + '0');
			if (b != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
