#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located or NULL if value
 **/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("[%ld] = [%d]\n", jump->index, jump->n);
	}

	printf(" [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("[%ld] = [%d]\n", node->index, node->n);
	printf("[%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}

