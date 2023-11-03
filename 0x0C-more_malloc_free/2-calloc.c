#include "main.h"
#include "stdlib.h"

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elements of array
 * @size: size of array
 *
 * Return: array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	k = 0;
	while (k < nmemb * size)
	{
		*((char *)(ptr) + k) = 0;
		k++;
	}
	return (ptr);
}
