#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: String 1
 * @src: String 2
 * @n: length
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, count;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[i] = src[count];
		i++;
	}
	if (count < n)
		dest[i] = '\0';
	return (dest);
}
