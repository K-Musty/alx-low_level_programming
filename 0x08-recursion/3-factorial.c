#include "main.h"
/**
 * factorial - calculates factorial
 * @n: number to be calculated by factorial
 * Return: factorial number
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	if (n > 1)
		return (n * factorial(n - 1));
	else
		return (-1);
}
