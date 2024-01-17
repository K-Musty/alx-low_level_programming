#include "main.h"
/**
 * _isupper - This function will check for uppercase character
 * @c: This the what is to be tested
 * Return: 1 if it is uppercase
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
