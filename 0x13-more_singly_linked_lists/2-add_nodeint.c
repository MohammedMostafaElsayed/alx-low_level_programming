#include "lists.h"

/**
 * add_nodeint - add node
 * @head: first
 * @n: data
 *
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	x->n = n;
	x->next = *head;
	*head = x;
	return (*head);
}
