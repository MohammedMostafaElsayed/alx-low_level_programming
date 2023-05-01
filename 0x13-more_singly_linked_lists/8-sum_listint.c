#include "lists.h"

/**
 * sum_listint - sum
 * @head: 1 mem
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *x;
	int sum;

	x = head;
	sum = 0;
	if (x == NULL)
		return (0);
	while (x != NULL)
	{
		sum += x->n;
		x = x->next;
	}
	return (sum);
}
