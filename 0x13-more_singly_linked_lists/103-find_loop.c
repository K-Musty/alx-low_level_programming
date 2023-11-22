#include "lists.h"

/**
 * find_listint_loop - finds the loop
 * @head: pointer address
 *
 * Return: NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *kalli, *kadi;

	if (!head)
		return (NULL);
	kalli = kadi = head;
	while (kadi->next && kadi->next->next)
	{
		kadi = kadi->next->next;
		kalli = kalli->next;
		if (kadi == kalli)
		{
			kalli = head;
			while (kalli != kadi)
			{
				kalli = kalli->next;
				kadi = kadi->next;
			}
			return (kadi);
		}
	}
	return (NULL);
}
