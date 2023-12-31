#include <stdio.h>

/**
 * main - Prints series from 1..100 with Fizz Buzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, f, b;

	for (i = 1; i <= 98; i++)
	{
		f = i % 3;
		b = i % 5;
		(f == 0 && b == 0) ? printf("FizzBuzz ") : f == 0 ?
			printf("Fizz ") : b == 0 ? printf("Buzz ") : printf("%i ", i);
	}
	printf("Fizz Buzz\n");
	return (0);
}
