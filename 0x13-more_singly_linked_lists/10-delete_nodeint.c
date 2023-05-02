#include "lists.h"

/**
 * delete_nodeint_at_index - delete spacific 
 * @head: 1 mem
 * @index: 1 mem
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x;
	unsigned int i;
	
	x = *head;
	i = 0;
	if (*head == NULL)
	{
		free(*head);
		return (-1);
	}
	if (index == 0)
	{
		(*head) = (*head)->next;
		return (1);
	}
	while (x != NULL)
	{
		if (i == index - 1)
		{
			x->next = x->next->next;
			return (1);
		}
		i++;
		x = x->next;
	}
	return (-1);
}
