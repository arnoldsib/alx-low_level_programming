#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of the list.
 * @head: head nodes
 * @index: index of the node(starting at 0)
 * Return: list
 * if it does not exis, return 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int i;

	if (!head)
		return (0);
	for (i = 0; new; i++)
	{
		if (i == index)
			return (new);
		new = new->next;
	}
	return (NULL);
}

