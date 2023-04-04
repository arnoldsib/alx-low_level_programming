#include "lists.h"

/**
 * sum_listint - Function that sums data of a list.
 * @head: head node
 *
 * Return:  value ofsum of all data(n) in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		sum += head->n;
		return (sum);
	}
	return (sum);
}

