#include "lists.h"

/**
 * delete_nodeint_at_index - delets node at index
 * @head: head
 * @index: index of node to delete
 *
 * Return: 1 else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *delete_node;
	size_t i;

	current = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	i = 0;
	while (i < index - 1 && current != NULL && index != 0)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		delete_node = current->next;
		free(current);
		*head = delete_node;
	}
	else
	{
		if (current->next == NULL)
			delete_node = current->next;
		else
			delete_node = current->next->next;
		free(current->next);
		current->next = delete_node;
	}
	return (1);
}
