#include "lists.h"

/**
 * add_node - adds a new node at beginning of list_t
 * @head: head node
 * @str: string
 *
 * Return: address of new node or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t strlen;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = *head;
	strlen = 0;
	while (*str != '\0')
	{
		strlen++;
		str++;
	}
	new->len = strlen;
	*head = new;
	return (*head);
}
