#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  duplicates string
 * @str: String
 *
 * Return: String duplicated
 */
char *_strdup(char *str)
{
	char *a = NULL;
	int i, size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	a = malloc((size + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		a[i] = str[i];
	return (a);
}
