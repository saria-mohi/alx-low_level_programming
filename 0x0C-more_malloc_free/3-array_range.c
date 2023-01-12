#include <stdlib.h>
#include "main.h"
/**
 * *array_range - function to fill array of int
 * @min: minimum element of array
 * @max: is maximum number of array
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *a, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	a = malloc(sizeof(int) * len);
	if (a == NULL)
		return (NULL);
	while (len--)
	{
		a[len] = max--;
	}
	return (a);
}
