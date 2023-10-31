#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - makes to two dimensional array
 * @width: columns
 * @height: rows
 *
 * Return: function to two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j, **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(a[j]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
