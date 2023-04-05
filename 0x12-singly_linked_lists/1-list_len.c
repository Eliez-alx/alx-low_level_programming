#include "lists.h"
#include <stdlib.h>

/**
 * list_len - return number of elements in a list
 * @h: pointer to a node
 * Return: number of pointer
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
