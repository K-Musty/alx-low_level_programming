#include "lists.h"

/**
 * free_list - frees a list.
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *real_node;

	while ((real_node = head) != NULL)
	{
		head = (*head).next;
		free((*real_node).str);
		free(real_node);
	}
}
