#include "main.h"

/**
 * _printed_num - recursively printd numbers in binary
 * @n: number
 */

void _printed_num(unsigned long int n)
{
	if (n == 0)
		return;
	_printed_num(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number printd
 *
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	_printed_num(n);
}
