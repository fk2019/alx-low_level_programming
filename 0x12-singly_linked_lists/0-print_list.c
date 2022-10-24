#include "lists.h"

/**
 * print_list - prints elements of a list_t
 * @h: list_t
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			n++;
			h = h->next;
		}
		printf("[%u] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
