#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main method
 * @argc: number of array
 * @argv: array
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *poin;
	int b;
	int k;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	poin = (char *)main;

	for (k = 0; k < b; k++)
	{
		if (k == b - 1)
		{
			printf("%02hhx\n", poin[k]);
			break;
		}
		printf("%02hhx ", poin[k]);
	}
	return (0);
}
