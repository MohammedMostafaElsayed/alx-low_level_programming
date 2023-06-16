#include "lists.h"
/**
* add_dnodeint_end - add to end
* @head: 1 ele
* @n: 2 ele
* Return: node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp, *new;

temp = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
if (*head == NULL)
{
new->n = n;
new->next = NULL;
new->prev = NULL;
*head = new;
return (*head);
}
while (temp->next != NULL)
{
temp = temp->next;
}
new->n = n;
new->next = NULL;
new->prev = NULL;
temp->next = new;
new->prev = temp;
return (*head);

}
