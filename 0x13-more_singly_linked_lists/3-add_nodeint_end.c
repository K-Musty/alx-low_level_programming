#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end
 * @head: pointer head
 * @n: new node
 *
 * Return: address pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !temp_node)
		return (NULL);

	temp_node->next = NULL;
	temp_node->n = n;
	if (!*head)
		*head = temp_node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = temp_node;
	}
	return (temp_node);
}
