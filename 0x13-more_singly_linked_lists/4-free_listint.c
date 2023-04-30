#include "lists.h"

/**
 * free_listint - free list
 * @head: first
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *x;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		x = head;
		head = head->next;
		free(x);
	}
}
