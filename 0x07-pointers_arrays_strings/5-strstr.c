#include "main.h"
/**
 * _strstr - function locates a substring
 * @haystack: is a string
 * @needle: is a subString
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; *(needle + i); i++)
			if (*(needle + i) != *(haystack + i))
				break;
		if (!*(needle + i))
			return (haystack);
		haystack++;
	}
	return (NULL);
}
