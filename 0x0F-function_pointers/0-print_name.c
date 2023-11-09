#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name
 * @name: the name to be
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
