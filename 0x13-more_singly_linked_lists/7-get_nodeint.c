#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index
 * @head: pointer head
 * @index: index of node
 *
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *node;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;
	return (node);
}
