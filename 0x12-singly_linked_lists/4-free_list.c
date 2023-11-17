#include "lists.h"

/**
 * free_list - frees a list.
 * @head: pointer
 */
 void free_list(list_t *head)
{
	list_t *node, *later_node;

	if (!head)
		return;

	node = head;
	while (node)
	{
		later_node = node->next;
		free(node->str);
		free(node);
		node = later_node;
	}
}
