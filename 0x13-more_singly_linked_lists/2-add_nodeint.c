#include "lists.h"

/**
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	x->n = n;
	x->next = *head;
	*head = x;
}

