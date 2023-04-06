#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a link list
 * @head: list to be freed
 */
void free_list(list_t *head)
{
	list_t *tmp1;

	while ((tmp1 = head) != NULL)
	{
		head = head->next;
		free(tmp1->str);
		free(tmp1);
	}
}
