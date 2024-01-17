#include "main.h"
/**
 * _strcat - Function that will concatenate two strings
 * @dest: This string to append to directly
 * @src: string that will be appended
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int k, l;

	k = 0;
	l = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	while (src[l] != '\0')
	{
		dest[k] = src[l];
		k++;
		l++;
	}
	dest[k] = '\0';
	return (dest);
}
