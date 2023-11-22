#include "lists.h"

/**
 * pop_listint - pops head oflist
 * @head: pointer head
 *
 * Return: node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head && *head)
	{
		tmp = *head;
		n = (*head)->n;
		*head = (*head)->next;
		free(tmp);
		return (n);
	}
	return (0);
}
