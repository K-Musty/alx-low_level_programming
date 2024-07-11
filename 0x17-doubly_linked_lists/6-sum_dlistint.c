#include "lists.h"
/**
 * sum_dlistint - This function will
 * returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: This is the head of the list
 * Return: sum of the data is returned
 */
int sum_dlistint(dlistint_t *head)
{
	int total;

	total = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			total = total + head->n;
			head = head->next;
		}
	}

	return (total);
}
