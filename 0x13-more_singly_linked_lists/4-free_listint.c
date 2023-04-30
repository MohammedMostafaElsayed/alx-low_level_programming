#include "lists.h"

/**
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
