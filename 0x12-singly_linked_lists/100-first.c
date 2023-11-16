#include "lists.h"
#include <stdio.h>
/**
 * first_display - prints message before execute main
 * Return: void
 */
void __attribute__((constructor)) first_display()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
