#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - This function will return the length of a string
 * @str: This is the string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - This function will copy the string pointed to by src
 * including terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: This is the pointer to the buffer that  we will copy the string
 * @src: This is the string to be copied
 *
 * Return: This is the  pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l1, n;

	l1 = 0;

	while (src[l1] != '\0')
	{
		l1++;
	}

	for (n = 0; n < l1; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: the pointer to the new dog 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (l1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (l2 + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
