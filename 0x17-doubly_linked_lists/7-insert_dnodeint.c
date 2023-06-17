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
dlistint_t *temp, *temp2, *new;
unsigned int x;

x = 1;
temp = *h;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
new->prev = NULL;
if (idx == 0)
    return (add_dnodeint(&(*h), n));
while (temp != NULL)
{
    if (x == idx)
        break;
    x++;
    temp = temp->next;
}
temp2 = temp->next;
if (temp2 == NULL)
    return NULL;
temp->next = new;
temp2->prev = new;
new->next = temp2;
new->prev = temp;
return (NULL);
}
