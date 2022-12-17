#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at end of dlistint_t list
 * @head: head of list
 * @n: list data
 *
 * Return: address of new element or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *new, *last;

        last = *head;
        new = malloc(sizeof(dlistint_t));
        if (new == NULL)
        {
                dprintf(2, "Error: Cannot malloc\n");
                return (NULL);
        }
        new->n = n;
        new->next = NULL;
        new->prev = NULL;
        if (*head == NULL)
        {
                *head = new;
                return (*head);
        }
        while(last->next != NULL)
        {
                last = last->next;
        }
        last->next = new;
        new->prev = last;
        return (*head);
}
