#include "lists.h"
/**
* free_dlistint - freeee
* @head: 1 ele
* Return: none
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *x;

while (head != NULL)
{
x = head;
head = head->next;
free(x);
}

}
