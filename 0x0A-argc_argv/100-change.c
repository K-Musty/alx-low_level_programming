#include <stdio.h>
#include <stdlib.h>

/**
 * main - main method
 * @argc: number of arguments
 * @argv: pointers to arguments
 * @a: amount
 * @coin: coins
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int i, a, coin = 0;
	int value[] = {25, 10, 5, 2, 1};

	if (argc - 1 != 1)
	{
		printf("%s\n", "Error");
		return (1);
	}
	a = atoi(argv[1]);
	for (i = 0; i < 5; i++)
		while (value[i] <= a)
		{
			coin++;
			a -= value[i];
		}
	printf("%i\n", coin);
	return (0);
}
