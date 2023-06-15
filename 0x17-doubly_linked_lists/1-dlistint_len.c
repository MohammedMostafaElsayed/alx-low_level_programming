#include "lists.h"

/**
* dlistint_len - print list
* @h: 1 ele
*
* Return: number of ele
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t i;
const dlistint_t *x;

i = 0;
x = h;
while (x != NULL)
{
x = x->next;
i++;
}
return (i);
}
