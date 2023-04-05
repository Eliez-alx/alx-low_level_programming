#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverses a list
 * @head: pointer to a first node
 * Return: pointer to a first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *new;

		if (head == NULL || *head == NULL)
		return (NULL);
	new = NULL;

	while ((*head)->next != NULL)
	{
		prev = (*head)->next;
		(*head)->next = new;
		new = *head;
		*head = prev;
	}
	(*head)->next = new;
	return (*head);
}
