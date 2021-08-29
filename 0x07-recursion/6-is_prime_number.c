#include "holberton.h"

/**
 * prime_finder - helps find prime number
 * @n: an integer
 * @i: half of the integer
 * Return: 1 if prime, 0 for otherwise
 */
int prime_finder(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);
	return (prime_finder(n, i - 1));
}

/**
 * is_prime_number - prints prime number
 * @n: an integer
 * Return: 1 if integer is prime number, 0 for otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_finder(n, n / 2));
}
