#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - counts number of nodes
 * @head: pointer to a node
 * Return: if a list is not looped - 0
 * otherwise - number of node in a list
 */
size_t print_listint_safe(const listint_t *head)
{
	cons listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head
