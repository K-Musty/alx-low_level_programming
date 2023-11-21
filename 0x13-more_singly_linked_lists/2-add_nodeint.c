#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: pointer to list head
 * @n: new node
 *
 * Return: pointer address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp_node;

	temp_node = *head;
	*head = malloc(sizeof(listint_t));
	if (*head)
	{
		(*head)->n = n;
		(*head)->next = temp_node;
	}
	return (*head);
}
