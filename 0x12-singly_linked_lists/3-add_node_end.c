#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the link
 * @head: double pointer to a list
 * @str: string for a new node
 * Return: address of new element or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, temp1;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (str[length])
		length++;
	temp->len = length;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	temp1 = *head;
	while (temp1->next)
		temp1 = temp1->next;
	temp1->next = temp;
	return (temp);
}
