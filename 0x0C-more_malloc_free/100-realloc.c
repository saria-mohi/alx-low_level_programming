#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - function to reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: pointer for a new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *pptr;

	unsigned int i;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(sizeof(char) * new_size);
		pptr = ptr;
		for (i = 0; i < old_size; i++)
			p[i] = pptr[i];
		free(ptr);
		return (p);
	}
	return (ptr);
}
