#include "holberton.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}

/**
 * palin_helper - checks for palindrome
 * @s: string
 * @start: pointer to start of string
 * @end: pointer to end of string
 * Return: 1 for palindrome, 0 for no palindrome
 */
int palin_helper(char *s, int start, int end)
{
	if (start == end)
		return (1);
	if (s[start] != s[end])
		return (0);
	if (start >= end)
		return (1);

	return (palin_helper(s, start + 1, end - 1));

}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palin_helper(s, 0, len - 1));
}
