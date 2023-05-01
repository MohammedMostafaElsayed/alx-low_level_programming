#include "lists.h"

/**
 * get_nodeint_at_index - get index
 * @head: 1 mem
 * @index: 2 mem
 *
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *x;
	unsigned int i;

	x = head;
	i = 0;
	while (x != NULL)
	{
		if (i == index)
		{
			return (x);
		}
		i++;
		x = x->next;
	}
	return (NULL);
}			
