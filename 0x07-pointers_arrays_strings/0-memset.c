#include "main.h"
/**
 * _memset - fi=unction use to fill memory
 * @s: is pointed
 * @b: is constant byte
 * @n: is a bytes
 * Return:  a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
