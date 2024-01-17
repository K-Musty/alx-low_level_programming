#include "main.h"
/**
 * _strncat - This function will concatenate two strings
 * @dest:This string to concatenate to
 * @src: The string to be appended
 * @n: The n bytes
 *
 * Return: Alway 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int w, d;

	w = 0;
	d = 0;

	while (dest[w] != '\0')
	{
		w++;
	}
	while (src[d] != '\0' && d < n)
	{
		dest[w] = src[d];
		w++;
		d++;
	}
	dest[w] = '\0';
	return (dest);
}
