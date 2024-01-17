#include "main.h"
/**
 * _strpbrk - This function will search a string for any of a set of bytes.
 * @s: This is the first value char
 * @accept: This will be the second value char
 *
 * Return: The char will be the result
 */
char *_strpbrk(char *s, char *accept)
{
	int search = 0;

	while (*s)
	{
		while (accept[search] != '\0')
		{
			if (*s == accept[search])
				return (s);
			search++;
		}
		search = 0;
		s++;
	}
	return ('\0');
}
