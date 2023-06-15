#include "lists.h"

/**
 * add_dnodeint - add node
 * @head: 1 ele
 * @n: 2 ele
 *
 * Return: node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *x;

	x = malloc(sizeof(dlistint_t));
	if (x == NULL)
		return (NULL);
	x->n = n;
	x->prev = NULL;
	x->next = NULL;
	x->next = *head;
	if ((*head) != NULL)
		(*head)->prev = x;
	(*head) = x;
	return (x);
}
