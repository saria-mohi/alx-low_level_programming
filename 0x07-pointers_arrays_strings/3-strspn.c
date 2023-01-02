#include "main.h"
/**
 * _strspn - function to print length of string
 * @s: is the initial segment
 * @accept: is compare string
 * Return:  the number of bytes in the initial segment of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (j = 0 ; accept[j] != '\0' && s[i] != accept[j] ; j++)
			;
		if (accept[j] == '\0')
			return (i);
	}
	return (i);
}
