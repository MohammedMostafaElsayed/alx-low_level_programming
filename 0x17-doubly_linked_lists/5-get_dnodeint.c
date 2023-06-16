#include "lists.h"
/**
* get_dnodeint_at_index - get node
* @head: 1 ele
* @index: 2 ele
* Return: node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int x;
dlistint_t *temp;

x = 0;
temp = head;
while (temp != NULL)
{
if (x == index)
{
return (temp);
}
x++;
temp = temp->next;
}
return (NULL);
}
