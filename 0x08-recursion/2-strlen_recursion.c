#include "main.h"
/**
 * _strlen_recursion - Prints the length of aa string
 * @s: the string
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
