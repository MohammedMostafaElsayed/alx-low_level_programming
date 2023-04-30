#include "lists.h"

/**
 * listint_len - print all element of list
 * @h: the first node
 *
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *x;
	size_t n;

	x = h;
	n = 0;
	while (x != NULL)
	{
		n++;
		x = x->next;
	}
	return (n);
}
