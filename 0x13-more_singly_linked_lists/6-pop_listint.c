#include "lists.h"

/**
 * pop_listint - delet first node
 * @head: first node
 *
 * Return: the date
 */
int pop_listint(listint_t **head)
{
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	(*head) = (*head)->next;
	return (n);
}
