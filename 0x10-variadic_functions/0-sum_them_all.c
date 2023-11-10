#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the numbers
 * @n: numbers to sum
 *
 * Return: all argume3nt sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numb;
	int summ;
	unsigned int i = n;

	if (!n)
	{
		return (0);
	}
	va_start(numb, n);
	summ = 0;
	for (i = 0; i < n; i++)
		summ = summ + va_arg(numb, int);
	va_end(numb);
	return (summ);
}
