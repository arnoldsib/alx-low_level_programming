#include "lists.h"

/**
 * print_listint - prints the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	do {
		printf("%d\n", h->n);
		h = h->next;
		a++;
	} while (h);
	return (a);
}
