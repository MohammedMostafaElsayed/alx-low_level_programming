#include "lists.h"
/**
* sum_dlistint - sum
* @head: 1 ele
* Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp;
int sum;

sum = 0;
temp = head;
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
