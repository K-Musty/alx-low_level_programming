#include "main.h"

/**
 * find_is_prime_number - checks to see if n is prime
 * @n: base number to determine if prime
 * @i: the iterative number to get value
 *
 * Return: 1 if prime, 0 if not
 */
int find_is_prime_number(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (find_is_prime_number(n, i + 1));
}

/**
 * is_prime_number - checks to see if n is prime
 * @n: the base number
 *
 * Return: 1 if number is prime and 0 if it isnt
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (find_is_prime_number(n, 2));
}
