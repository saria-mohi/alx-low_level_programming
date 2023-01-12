#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - function to allocates memory
 * @b: is number of bytes wanna to allocates
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
