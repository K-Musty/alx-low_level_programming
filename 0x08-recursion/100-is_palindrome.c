#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: the string to print
 *
 * Return: the length of string
 */
int _strlen(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen(s + 1));
	return (0);
}
/**
 * find_is_palindrome - check if s is palindrome
 * @s: string base address
 * @l: string length
 * @i: iterator
 * Return: 1 if s is palindrome, else 0
 */
int find_is_palindrome(char *s, int l, int i)
{
	if (s[l] == s[i])
		if (l > i / 2)
			return (1);
		else
			return (find_is_palindrome(s, l + 1, i - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base string
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (find_is_palindrome(s, 0, _strlen(s) - 1));
}
