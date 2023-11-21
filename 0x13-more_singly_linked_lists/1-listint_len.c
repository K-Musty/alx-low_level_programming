#include "lists.h"

/**
 * listint_len - linked lists
 * @h: head pointer to first node
 *
 * Return: list node
 */
size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		h = h->next;
		k++;
	}
	return (k);
}
