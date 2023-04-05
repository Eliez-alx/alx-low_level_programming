#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverses a list
 * @head: pointer to a first node
 * Return: pointer to a first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
