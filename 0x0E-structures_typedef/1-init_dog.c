#include "dog.h"
/**
 * init_dog - function to initailize value of struct
 * @d: is a pointer
 * @name: dog name
 * @age: is dog age
 * @owner: dog owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
