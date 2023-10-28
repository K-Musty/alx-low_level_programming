#include "main.h"
#include <stdio.h>
/**
 * main - main method
 * @argc: number of argument
 * @argv: pointer to argument
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (*argv[0] > 0)
		printf("%i\n", argc - 1);
	return (0);
}
