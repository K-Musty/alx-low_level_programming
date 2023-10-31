#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Pointer to point allocated string
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to string
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *a = NULL;
	int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	a = malloc((i + j + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		a[k] = s1[k];
	i = k;
	for (k = 0; k < j; k++)
	{
		a[i] = s2[k];
		i++;
	}
	a[i] = '\0';
	return (a);
}

