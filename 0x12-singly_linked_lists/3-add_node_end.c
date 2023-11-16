#include "lists.h"

/**
 * add_node_end - Add a new node at the beginning of list_t
 * @head: pointer of head
 * @str: String to store in the list
 *
 * Return: address of the head is new
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *later_node, *new_node;
	size_t typ;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	typ = 0;

	while (str[typ])
		typ++;

	new_node->length = typ;
	new_node->next = NULL;
	later_node = *head;

	if (later_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (later_node->next != NULL)
			later_node = later_node->next;
		later_node->next = new_node;
	}

	return (*head);
}
