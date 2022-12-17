#include "lists.h"

/**
 * sum_dlistint - sums all data of dlistint_t list
 * @head: head of list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
        dlistint_t *current;
        int sum;

        current = head;
        sum = 0;
        while (current != NULL)
        {
                sum += current->n;
                current = current->next;
        }
        return (sum);
}
