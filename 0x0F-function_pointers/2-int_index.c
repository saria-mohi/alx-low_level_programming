#include "function_pointers.h"
/**
 * int_index - function that search for integer
 * @array: is array
 * @size: size of array
 * @cmp: is apointer
 * Return: if element match return index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
