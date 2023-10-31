#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow -  splits a string into words.
 * @str: String
 *
 * Return: strings as words
 */
char **strtow(char *str)
{
	char *a = NULL;
	unsigned int i = 0, j = 0, k;

	if (strncmp(str, "", 1) || str == NULL)
		return (NULL);
	a = malloc((i + j + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		a[k] = str[k];
	i = k;
	for (k = 0; k < j; k++)
	{
		a[i] = str[k];
		i++;
	}
	a[i] = 0;
	return (NULL);
}
