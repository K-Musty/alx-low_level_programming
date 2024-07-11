#include "lists.h"
/**
 * add_dnodeint - This function will add
 * a new node at the beginning of a dlistint_t list
 *
 * @head: This is the head of the list
 * @n: This is the value of the element
 * Return: the address of the new element is returned
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *brand_node;
	dlistint_t *h;

	brand_node = malloc(sizeof(dlistint_t));
	if (brand_node == NULL)
		return (NULL);

	brand_node->n = n;
	brand_node->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	brand_node->next = h;

	if (h != NULL)
		h->prev = brand_node;

	*head = brand_node;

	return (brand_node);
}
