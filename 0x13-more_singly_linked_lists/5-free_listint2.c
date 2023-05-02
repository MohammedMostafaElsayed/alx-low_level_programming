#include "lists.h"

/**
 * free_listint2 - free list
 * @head: first
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *x, *y;

	if (*head == NULL)
		return;
	x = *head;
	while (x != NULL)
	{
		y = x;
		x = x->next;
		free(y);
	}
	free(*head);
	free(x);
	/**head = NULL;*/
}
