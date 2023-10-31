#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: character
 *
 * Return: character array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a = malloc(size * sizeof(char));

	if (size == 0 || a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
