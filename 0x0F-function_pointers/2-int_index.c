#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - returns the index of the first
 * element for which the cmp
 * @array: array
 * @size: sze of element
 * @cmp: pointer to a function in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
