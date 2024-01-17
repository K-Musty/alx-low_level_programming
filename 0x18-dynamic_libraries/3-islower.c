#include "main.h"
/**
 * _islower - To check if the character is lowercase
 * @c: the charcter that is to be checked
 *
 * Return: 1 if it is lowercase else 0
 */
int _islower(int c)
{
	if (c >= 'c' && c <= 'z')
		return (1);
	else
		return (0);
}
