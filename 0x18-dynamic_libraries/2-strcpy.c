#include "main.h"
/**
 * _strncpy - This fuction will copy a string
 * @dest: First string
 * @src: Second string
 * @n: And an int n
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int nomcpy;

	nomcpy = 0;

	while (src[nomcpy] != '\0' && nomcpy < n)
	{
		dest[nomcpy] = src[nomcpy];
		nomcpy++;
	}
	while (nomcpy < n)
	{
		dest[nomcpy] = '\0';
		nomcpy++;
	}
	return (dest);
}
