#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes a node
 * @head: node head
 * @index: index
 * Return: 1 if it succeeded and -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *actual = *head;
	listint_t *nodo;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		nodo = *head;
		*head = (*head)->next;
		free(actual);
		return (1);
	}
	while (actual)
	{
		if (i  == index - 1)
		{
			nodo = actual->next;
			actual->next = nodo->next;
			free(nodo);
			return (1);
		}
		actual = actual->next, i++;
	}
	return (-1);
}
