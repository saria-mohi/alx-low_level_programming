#include "search_algos.h"

/**
 * binary_rec - function that searches for a value in a sorted array
 * @array: is pointer of given array
 * @left: is size_t element located at right side of the array
 * @right: is size_t element located at right side of the array
 * @value: is value to be searched
 * Return: Value, or -1 if value not present
 */

int binary_rec(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value,
							mid + 1, high));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value,
							low, mid));
	}

	return (-1);
}
/**
 * advanced_binary - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: is pointer of given array
 * @size: is size of elements in the array
 * @value: is value to be searched
 * Return: Value, or -1 if value not present
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, low, high));
}
