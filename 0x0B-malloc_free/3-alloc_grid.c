#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return:  pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **arr;

	int i, j;

	i = j = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(height * sizeof(arr));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] =  malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < width; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
