#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *brand_node;

	brand_node = malloc(sizeof(dlistint_t));
	if (brand_node == NULL)
		return (NULL);

	brand_node->n = n;
	brand_node->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = brand_node;
	}
	else
	{
		*head = brand_node;
	}

	brand_node->prev = h;

	return (brand_node);
}
