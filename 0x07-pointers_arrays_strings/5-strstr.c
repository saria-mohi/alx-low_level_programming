#include "main.h"
/**
 * _strstr - function locates a substring
 * @haystack: is a string
 * @needle: is a subString
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *sub;

		sub = haystack;

		while (*needle == *haystack)
		{
			haystack++, needle++;
		}
		if (*needle == '\0')
			return (sub);
		haystack++;
	}
	return (0);
}
