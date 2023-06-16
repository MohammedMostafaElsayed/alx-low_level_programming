#include "lists.h"
/**
* insert_dnodeint_at_index - add
* @h: 1 ele
* @idx: 2 ele
* @n: 3 ele
* Return: node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp, *new;
unsigned int x;

x = 0;
temp = *h;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
new->prev = NULL;
while (temp != NULL)
{
if (x + 1 == idx)
{
new->next = temp->next;
temp->next = new;
new->prev = temp;
return (new);
}
x++;
temp = temp->next;
}
return (NULL);
}
