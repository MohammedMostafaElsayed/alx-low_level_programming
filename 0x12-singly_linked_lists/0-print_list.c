#include "lists.h"

/**
 * print_list - function to print list
 * @h: 1 mem
 *
 * Return: int
 */
size_t print_list(const list_t *h)
{
	const list_t *p;
	size_t n;

	n = 0;
	p = h;
	while (p != NULL)
	{
		if (p->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%ld] [%s]\n", strlen(p->str), p->str);
		}
		p = p->next;
		n++;
	}
	return (n);
}

