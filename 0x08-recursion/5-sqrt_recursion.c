#include "main.h"

/**
 * find_sqrt_recursion - calculate using i for n
 * @n: base number or original
 * @i: the root iterator number
 *
 * Return: i
 */
int find_sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * 1 <= n)
		return (find_sqrt_recursion(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns square root of x
 * @n: the base number
 *
 * Return: the square root of base number, error if -1
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt_recursion(n, 0));
}
