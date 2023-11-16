#include "lists.h"

/**
 * add_node - Adds the new node
 * @head: pointer head
 * @str: String
 * Return: Number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp_node;
	size_t length;

	temp_node = malloc(sizeof(list_t));
	if (temp_node == NULL)
		return (NULL);

	temp_node->str = strdup(str);

	length = 0;

	while (str[length])
		length++;

	temp_node->length = length;
	temp_node->next = *head;
	*head = temp_node;

	return (*head);
}
