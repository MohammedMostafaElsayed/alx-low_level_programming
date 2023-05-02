#include "lists.h"

/**
 * insert_nodeint_at_index - add in middle
 * @head: 1 mem
 * @idx: 2 mem
 * @n: 3 mem
 *
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *x, *new;
	unsigned int y;

	x = *head;
	if (idx != 0)
	{
		y = 0;
		while (y > idx - 1 && x)
		{
			x = x->next;
			y++;
		}
		if (x == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = x->next;
	x->next = new;
	return (new);
}
