#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds new node at the begining of the list
 * @head: double pointer to a list
 * @str: new string to be added
 * Return: address of new element, NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[len])
		len++;

	temp->len = len;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
