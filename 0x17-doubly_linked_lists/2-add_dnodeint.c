#include "lists.h"

/**
 * add_dnodeint - adds new node at beginnig of a dlistint_t list
 * @head: head of list
 * @n: data of list
 *
 * Return: address of new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        dlistint_t *new;

        new = malloc(sizeof(dlistint_t));
        if (new == NULL)
        {
                dprintf(2, "Error: Cannot malloc\n");
                return (NULL);
        }
        new->n = n;
        new->next = *head;
        new->prev = NULL;
        *head = new;
        return (*head);
}
