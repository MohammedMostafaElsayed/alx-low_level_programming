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
	listint_t *x, *z;
	unsigned int y;

	z = malloc(sizeof(listint_t));
	if (z == NULL || (*head) == NULL)
		return (NULL);
	z->n = n;
	x = *head;
	y = 1;
	if (idx == 0)
	{
		z->next = x->next;
		x->next = z;
		return (z);
	}
	while (x != NULL)
	{
		if (y == idx)
		{
			z->next = x->next;
			x->next = z;
			return (z);
		}
		y++;
		x = x->next;
	}
	free(x);
	return NULL;
}
