#include "lists.h"

/**
 * add_node_end - to add node
 * @head: 1 mem
 * @str: 2 mem
 *
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x, *y;

	x = (list_t *)malloc(sizeof(list_t *));
	if (x == NULL)
		return (NULL);

	x->str = strdup(str);
	x->next = NULL;
	if (*head == NULL)
		*head = x;
	else
	{
		y = *head;
		while (y->next != NULL)
		{
			y = y->next;
		}
		y->next = x;
	}
	return (y);
}
