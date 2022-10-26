#include "lists.h"

/**
 * add_node_end - adds new node at end of list_t
 * @head: head of list
 * @str: string
 *
 * Return: address of new element otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t strlen;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	strlen = 0;
	while (*str != '\0')
	{
		strlen++;
		str++;
	}
	new->len = strlen;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (*head);
}
