#include "lists.h"

/**
 * po_listint - deletes head node of listint_t
 * @head: head
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (*head == NULL)
		return (0);
	current = *head;
	*head = (*head)->next;
	n = current->n;
	free(current);
	return (n);
}
