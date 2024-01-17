#include "main.h"
/**
 * _strcmp - This function will compare two strings
 * @s1: This is the first string to compare
 * @s2: This is the second string to compare
 *
 * Return: it will return less than 0 if s1 is less than s2,
 * 0 if they are equal,morethan 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
		return (0);
		}
		s1++;
		s2++;
	}
return (*s1 - *s2);
}
