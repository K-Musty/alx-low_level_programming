#include <stdio.h>

/**
 * main - main method
 * @argc: number of arguments
 * @argv: pointers to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
