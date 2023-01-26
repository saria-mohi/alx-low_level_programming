#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: A pointer to the list_t list
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list
	}
}
