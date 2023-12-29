#include "main.h"
/**
 * print_number - Prints a number
 * @p: The number to print
 *
 */
void print_number(int p)
{
	unsigned int num = p;

	if (p < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
