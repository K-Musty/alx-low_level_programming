#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns sum of lists
 * @head: pointer head
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
