#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to NULL
 *
 * @head: pointer
 *
 *Return: no return value
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
