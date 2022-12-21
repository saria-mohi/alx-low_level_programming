#include "main.h"
/**
 * _strcmp - function use to compare 2 String
 * @s1: String1
 * @s2: String2
 * Return: compare result
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
