#include "main.h"
/**
 * _strstr - function locates a substring
 * @haystack: is a string
 * @needle: is a subString
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int l, i, j;

	for (l = 0; needle[l] != '\0'; l++)
		;
	for (i = 0, j = 0; haystack[i] != '\0' && needle[j] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			j++;
		}
		else
			j = 0;
	}
	if (j == l)
	{
		return (needle);
	}
	else
	{
		return (0);
	}
}
