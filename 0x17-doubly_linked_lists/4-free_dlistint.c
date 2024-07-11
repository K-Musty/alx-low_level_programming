#include "lists.h"
/**
 * free_dlistint - This function will
 * free a dlistint_t list
 *
 * @head: This is the head of the list
 * Return: no return is returned
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_ptr;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp_ptr = head) != NULL)
	{
		head = head->next;
		free(tmp_ptr);
	}
}
