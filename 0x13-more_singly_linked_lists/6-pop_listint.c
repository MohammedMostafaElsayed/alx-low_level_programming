#include "lists.h"

/**
 * pop_listint - delet first node
 * @head: first node
 *
 * Return: the date
 */
int pop_listint(listint_t **head)
{
	listint_t *x;
	int n;

	if (*head == NULL)
		return (0);
	x = *head;
	n = x->n;
	*head = x->next;
	free(x);
	return (n);
}
