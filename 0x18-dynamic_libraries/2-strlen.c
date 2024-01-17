#include "main.h"
/**
 * _strlen - This function will return the length of a string
 * @s: This parameter to return
 *
 * Return: It will return the value of s
 */
int _strlen(char *s)
{
	int k;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}
