#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments.
 * @ac: number of strings
 * @av: strings
 *
 * Return: Strings concatenated
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *conc = NULL;

	if (ac < 1 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			k++;
	conc = malloc(sizeof(char) * (k + ac + 1));
	if (conc == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			conc[k] = av[i][j];
		conc[k] = '\n';
		k++;
	}
	conc[k] = '\0';
	return (conc);
}
