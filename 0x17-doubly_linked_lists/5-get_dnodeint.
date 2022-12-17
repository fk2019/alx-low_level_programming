#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of adlistint_t list
 * @head: list of head
 * @index: index
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        dlistint_t *current;
        unsigned int i;

        current = head;
        i = 0;
        while (i < index)
        {
                current = current->next;
                i++;
        }
        return (current);
}
