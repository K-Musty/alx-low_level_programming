#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - lets dog and frees it
 * @d: the dog
 *
 * Return: void/nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
