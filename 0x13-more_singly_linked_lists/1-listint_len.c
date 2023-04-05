#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - return number of elements in link
 * @h: linked list to traverse
 * Return: integers
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
