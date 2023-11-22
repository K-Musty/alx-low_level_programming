#include "lists.h"

/**
 * free_listint_safe - prints a list
 * @h: pointer address
 *
 * Return: address
 */
size_t free_listint_safe(listint_t **h)
{
	size_t k = 0;
	listint_t *head, *tmp;
	long diff;

	if (!h)
		return (0);
	head = *h;
	*h = NULL;
	while (head)
	{
		k++;
		diff = head->next - head;
		tmp = head;
		free(tmp);
		if (diff >= 0)
			break;
		head = head->next;
	}
	return (k);
}
