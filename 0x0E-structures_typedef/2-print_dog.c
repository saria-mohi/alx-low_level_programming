#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function to print value
 * @d: is a pointer
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		if (d->owner == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->owner);
	}
}
