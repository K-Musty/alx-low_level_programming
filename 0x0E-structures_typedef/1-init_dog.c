#include "dog.h"

/**
 * init_dog - that initialize a variable of type struct dog
 * @d: the dog
 * @name: dog name
 * @age: owner of dog's names
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
