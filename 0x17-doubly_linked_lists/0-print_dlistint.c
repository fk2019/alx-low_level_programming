#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head of list
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
        const dlistint_t *p;
        size_t n;

        p = h;
        n = 0;
        while (p != NULL)
        {
                printf("%d\n", p->n);
                p = p->next;
                n++;
        }
        return (n);
}
