#include "main.h"
/**
 * _memcpy - This function will copy a memory area.
 * @dest: This is the address of the destination memory
 * location where you want to copy the data
 * @src: This is the address of the source
 * memory location from which you want to copy from.
 * @n: This is the number of bytes you want to copy
 * from the source to the destination.
 *
 * Return: This will be a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cpy;

	cpy = 0;

	while (cpy < n)
	{
		dest[cpy] = src[cpy];
		cpy++;
	}
	return (dest);
}
