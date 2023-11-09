#include "3-calc.h"

/**
 * main - main method
 * @argc: number of document
 * @argv: number of array
 *
 * Return: 0
 */
int main(int argc, char **argv)
{

	int m;
	int n;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	m = atoi(argv[1]);
	n = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", func(m, n));
	return (0);
}
