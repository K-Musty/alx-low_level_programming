#include "lists.h"

/**
 * print_list - prints all elements in list_t
 * @h: pointer to singly linked list.
 *
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t typ;
	const list_t *temp = h;

	typ = 0;
	while (temp != NULL)
	{
		if (temp->str != NULL)
			printf("[%u] %s\n", temp->length, temp->str);
		else
			printf("[0] (nil)\n");
		temp = temp->next;
		typ++;
	}
	return (typ);
}
