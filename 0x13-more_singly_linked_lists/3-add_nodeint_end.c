#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of listint_t
 * @head: head
 * @n: integer value to add
 *
 * Return: address of new elements otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL && current != NULL)
		current = current->next;
	current->next = new;
	return (new);
}
