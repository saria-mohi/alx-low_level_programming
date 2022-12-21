#include "main.h"
/**
 * _strcat - concatination 2 Strings
 * @dest: String 1
 * @src: String 2
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest)
		dest++;
	while (*src)
	{
		*dest++ = *src++;
		*dest = *src;
	}
	return (result);
}
