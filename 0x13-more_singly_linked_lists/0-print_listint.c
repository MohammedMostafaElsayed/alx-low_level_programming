#include "lists.h"

/**
 * print_listint - print all element of list
 * @h: the first node
 *
 * Return: number of element
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *x;
	size_t n;

	x = h;
	n = 0;
	while (x != NULL)
	{
		printf("%d\n", x->n);
		n++;
		x = x->next;
	}
	return (n);
}
