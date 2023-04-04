#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add a new node at the beginning of a list
 * @head: Address of the first node of a list
 * @n: integer for the new node
 * Return: Address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tp;

	tp = malloc(sizeof(listint_t));
	if (tp == NULL)
		return (NULL);
	tp->n = n;
	tp->next = *haed;
	*head = tp;
	return (*head);
}
