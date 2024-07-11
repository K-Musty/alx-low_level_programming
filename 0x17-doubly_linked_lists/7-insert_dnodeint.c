#include "lists.h"

/**
 * insert_dnodeint_at_index - This function will
 * insert a new node at a given position
 *
 * @h: This is the head of the list
 * @idx: index of the new node is this
 * @n: value of the new node will be this
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *head;
	unsigned int iter;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		head = *h;
		iter = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (iter == idx)
			{
				if (head->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = head->next;
						new_node->prev = head;
						head->next->prev = new_node;
						head->next = new_node;
					}
				}
				break;
			}
			head = head->next;
			iter++;
		}
	}

	return (new_node);
}
