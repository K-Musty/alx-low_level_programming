#include "lists.h"
/**
 * dlistint_len - This function returns
 * the number of elements in a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int adder;

	adder = 0;

	if (h == NULL)
		return (adder);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		adder++;
		h = h->next;
	}

	return (adder);
}
