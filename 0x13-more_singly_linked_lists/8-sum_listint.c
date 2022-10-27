#include "lists.h"

/**
 * sum_listint -  sums all data of listint_t
 * @head: head
 *
 * Return: sum, 0 if list empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum;

	if (head == NULL)
		return (0);
	current = head;
	sum = 0;
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
