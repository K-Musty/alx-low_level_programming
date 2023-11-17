#include "lists.h"

/**
 * free_list - frees a list.
 * @head: pointer
 */
 void free_list(list_t *head)
{
	list_t *later_node;

	while ((later_node = head) != NULL)
	{
		head = (*head).next;
		free((*later_node).str);
		free(later_node);
	}
}
