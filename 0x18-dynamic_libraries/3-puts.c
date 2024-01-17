#include "main.h"
/**
 * _puts - This funtion will print a string to stdout
 * @str: The pointer parameter
 *
 * Return: It will return nothing
 */
void _puts(char *str)
{
	int h;

	for (h = 0; str[h] != '\0'; h++)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
