#include <stdlib.h>
#include "main.h"
/**
 * _memset - function use to fill memory
 * @s: is pointed
 * @b: is constant byte
 * @n: is a bytes
 * Return:  a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * _calloc - function to alocate memory for an array
 * @nmemb: is number of elements
 * @size: size of any element in array
 * Return: memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
