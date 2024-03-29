#include "lists.h"
/**
 * list_len - a function that returns the number of elements
 * @h: is a list
 * Return: returns the number of elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str != NULL)
			i++;
		h = h->next;
	}
	return (i);
}
