#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of the link
 * @head: double pointer to a list
 * @str: string for a new node
 * Return: address of new element or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp1;
	size_t n;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	temp->len = n;
	temp->next = NULL;
	temp1 = *head;

	if (temp1 == NULL)
	{
		*head = temp;
	}
	else
	{
		while (temp1->next != NULL)
			temp1 = temp1->next;
		temp1->next = temp;
	}

	return (*head);
}
