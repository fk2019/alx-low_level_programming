#include "lists.h"

/**
 * print_listint - prints all elements of listint_t
 * @h: head
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int n;

	n = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;

	}
	return (n);
}
