#include "lists.h"
/**
 * get_dnodeint_at_index - This function will return the
 * nth node of a dlistint_t linked list
 *
 * @head: This is the head of the list
 * @index: at an index of the nth node
 * Return: nth node is returned
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int dex;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	dex = 0;

	while (head != NULL)
	{
		if (dex == index)
			break;
		head = head->next;
		dex++;
	}

	return (head);
}
