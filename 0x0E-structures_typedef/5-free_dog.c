#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function to free space
 * @d: is a pointer
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
