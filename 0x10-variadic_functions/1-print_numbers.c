#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints numberes
 * @n: number
 * @separator: number separator
 *
 * Return: separated numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int i;

	va_start (numb, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numb, unsigned int));
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(numb);
	printf("\n");
}
