#include "lists.h"

/**
 * listint_len - returns number of elements of listint_t
 * @h: head
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
