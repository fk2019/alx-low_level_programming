#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t
 * list
 * @h: list head
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
        const dlistint_t *p;
        size_t n;

        p = h;
        n = 0;
        while (p != NULL)
        {
                p = p->next;
                n++;
        }
        return (n);
}
