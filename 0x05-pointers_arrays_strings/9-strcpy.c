#include "main.h"
/**
 * *_strcpy - copy  string to point
 * @dest: pointer wanna to be copy
 * @src: String wanna copy
 * Return: pointer after copy
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	for (len = 0; src[len] != '\0'; len++)
		;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
