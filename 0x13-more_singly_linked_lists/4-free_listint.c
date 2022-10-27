#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: head
 *
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
	free(head);
}
