#include "lists.h"

/**
 * add_nodeint  -adds new node at beginning og listint_t
 * @head: head
 * @n: integer value to add
 * * Return: address of new element otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
