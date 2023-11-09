#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - maps an array through a func pointer
 * @array: the int array
 * @size: the array size
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

	if (array && action)
		for (i = 0; i < (int)size; i++)
			action(array[i]);
}
