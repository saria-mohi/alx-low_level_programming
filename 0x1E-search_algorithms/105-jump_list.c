#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers using the
 *             Jump search algorithm.
 *
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located or NULL if value
 *         is not present in head or if head is NULL.
 **/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i, j;
	listint_t *prev, *curr;

	if (!list)
		return (NULL);

	jump = sqrt(size);
	prev = NULL;
	curr = list;

	while (curr->n < value)
	{
		prev = curr;
		i = 0;
		while (i < jump && curr->next)
		{
			curr = curr->next;
			i++;
		}
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
	}
	j = prev ? prev->index : 0;
	printf("Value found between indexes [%lu] and [%lu]\n", j, curr->index);
	
	while (prev && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}

	if (!prev)
		return (NULL);

	while (prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
		if (!prev)
			return (NULL);
	}

	if (prev->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		return (prev);
	}
	return (NULL);
}
