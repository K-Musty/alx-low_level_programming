#include "lists.h"
/**
 * print_dlistint - This function will print
 * all the elements of a dlistint_t list
 *
 * @h: This is the head of the list
 * Return: the number of nodes is returned
 */
size_t print_dlistint(const dlistint_t *h)
{
	int adder;

	adder = 0;

	if (h == NULL)
		return (adder);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		adder++;
		h = h->next;
	}

	return (adder);
}
