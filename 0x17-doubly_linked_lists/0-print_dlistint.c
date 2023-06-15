#include "lists.h"

/**
* print_dlistint - print list
* @h: 1 ele
*
* Return: number of ele
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
const dlistint_t *x;

i = 0;
x = h;
while (x != NULL)
{
printf("%d\n", x->n);
x = x->next;
i++;
}
return (i);
}
