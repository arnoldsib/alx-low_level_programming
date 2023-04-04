#include "lists.h"

/**
 * free_listint - Function that frees alist
 * @head: pointer
 *
 * Return: no return value
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}

