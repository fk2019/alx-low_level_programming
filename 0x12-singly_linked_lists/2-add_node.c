#include "lists.h"

/**
 * _strlen - returns length of string
 * @str: string
 8
 * Return: length
 */
size_t _strlen(char *str)
{
	size_t n;

	n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}

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
	strlen = _strlen(new->str);
	new->len = strlen;
	*head = new;
	return (*head);
}
