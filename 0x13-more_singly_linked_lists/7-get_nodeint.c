#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of listint_t
 * @head: head
 * @index: index
 *
 * Return: address of nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	if (!index)
		return (NULL);
	if (index != 0)
	{
		current = head;
		i = 0;
		while (i < index)
		{
			current = current->next;
			i++;
		}
	}
	else
		return (head);
	return (current);
}
