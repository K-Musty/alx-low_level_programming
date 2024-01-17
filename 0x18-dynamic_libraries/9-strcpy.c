#include "main.h"

/**
 * _strcpy - This function will copy the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: This is the pointer to the buffer in which we copy the string
 * @src: This is the string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int leng, k;

	leng = 0;

	while (src[leng] != '\0')
	{
		leng++;
	}
	for (k = 0; k < leng; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';

	return (dest);
}
