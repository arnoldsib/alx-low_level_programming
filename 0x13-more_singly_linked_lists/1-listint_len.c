#include "lists.h"

/**
 * listint_len - function to return len
 * @h: head of a pointer
 *
 * Return: size_t lenth of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	do {
		h = h->next;
		i++;
	} while (h != NULL);
	return (i);
}
