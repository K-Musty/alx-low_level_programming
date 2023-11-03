#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);
	j = ((max + 1) - min);

	ptr = malloc(j * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < j)
	{
		*(ptr + i) = min + i;
		i++;
	}
	return (ptr);
}
