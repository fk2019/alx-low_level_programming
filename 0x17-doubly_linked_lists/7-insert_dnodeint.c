#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given index
 * @h: head of list
 * @idx: index
 * @n: data
 *
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
        dlistint_t *current, *new, *prev;
        unsigned int i;

        current = *h;
        i = 0;
        while (current != NULL)
        {
                current = current->next;
                i++;
        }
        if (idx >= i)
        {
                dprintf(2, "Error: Cannot add node at index %d\n", idx);
                return (NULL);
        }
        i = 0;
        current = *h;
        while (i < idx)
        {
                current = current->next;
                i++;
        }
        prev = current->prev;
        new = add_dnodeint(&current, n);
        new->prev = prev;
        prev->next = new;
        return (new);
}
