#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at give index
 * @head:lis
 * @index:given
 * Return: -1 or 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *x, *z, *xx;
	unsigned int i;

	x = *head;
	if (x == NULL)
		return (-1);
	if (index != 0)
	{
		for (i = 0; i < index - 1 && x; i++)
		{
			x = x->next;
		}
		if (x == NULL)
			return (-1);
	}
z = x->next->next;
	if (index == 0)
	{
		x = *head;
		*head = (*head)->next;
		free(x);
		return (1);
	}
xx = x->next;
	x->next = z;
z->prev = x;
free(xx);
	return (1);
}
