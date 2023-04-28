#include "lists.h"

/**
 * free_list - free all list
 * @head: 1 mem
 *
 * Return void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
	return;
}
