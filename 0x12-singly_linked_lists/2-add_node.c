#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *x;

	x = (list_t *)malloc(sizeof(list_t *));
	if (x == NULL)
		return (NULL);
	x->str = strdup(str);
	x->next = *head;
	*head = x;
	return (*head);
}	
