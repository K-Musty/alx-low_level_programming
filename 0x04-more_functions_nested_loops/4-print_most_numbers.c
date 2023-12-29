#include "main.h"
/**
 * print_most_numbers - This function will print number 0 t0 9 not 2 and 4
 *
 * Return: This will return nothing
 */
void print_most_numbers(void)
{

	int number;

	for (number = 48; number < 58; number++)
	{
		if ((number == 50) || (number == 52))
		{
			continue;
		}
		_putchar(number);
	}
	_putchar(10);
}
