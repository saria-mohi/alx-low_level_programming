#include "main.h"

/**
 * set_bit - function to set the value of a bit
 * @index: starting from 0 of the bit you want to set
 * @n: pointer number of i
 * Return: 1 if it worked, or -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
