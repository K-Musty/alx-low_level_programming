#include "main.h"
/**
 * _isupper - Checks if character is upper
 * @c: character
 * Return: 0 if lower and 1 if true
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
