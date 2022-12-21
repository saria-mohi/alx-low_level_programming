#include "main.h"
/**
 * _strncpy - function to copy String to String
 * @dest: String1
 * @src: String2
 * @n: The length of int
 * Return: copy of  String
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ret = dest;

	while (*src && n)
	{
		*dest++ = *src++;
		n--;
	}
	while (n--)
		*dest++ = '\0';
	return (ret);
}
