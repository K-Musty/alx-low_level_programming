#include "main.h"
/**
 * _isdigit - This will check for digits 0 throuch 9
 * @c: The character to check
 * Return: 1 if it is digit otherwse 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
