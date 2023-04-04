#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletethe first element of the list
 * @head: pointer for the list
 * Return: integer if success
 */
int pop_listint(listint_t **head)
{
	listint_t *tp;
	int my_data;

	if (*head == NULL)
		return (0);

	tp = *head;
	*head = tp->next;
	my_data = tp->n;
	free(tp);
	return (my_data);
}
