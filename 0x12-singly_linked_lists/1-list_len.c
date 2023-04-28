#include "lists.h"

/**
 * list_len - function to print list
 * @h: 1 mem
 *
 * Return: int
 */
size_t list_len(const list_t *h)
{
	const list_t *p;
	size_t n;

	n = 0;
	p = h;
	while (p != NULL)
	{
		p = p->next;
		n++;
	}
	return (n);
}

