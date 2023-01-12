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
	int *ptr;

	int i, arrLen;

	if (min > max)
		return (NULL);
	arrLen = max - min + 1;
	ptr = malloc(sizeof(int) * arrLen);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
