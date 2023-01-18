#include "function_pointers.h"
/**
 * array_iterator - function given as parameters
 * @array: is array
 * @size: is array size
 * @action: is a pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
