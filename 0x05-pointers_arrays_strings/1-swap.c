#include "main.h"
/**
 * swap_int - function that swaps the values of two number
 * @a: is number one
 * @b: is number two
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
