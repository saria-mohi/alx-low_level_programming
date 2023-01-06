#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that alocate character in String
 * @s: is String
 * @c: is acharacter
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
