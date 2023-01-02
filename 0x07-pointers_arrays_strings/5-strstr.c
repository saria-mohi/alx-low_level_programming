#include "main.h"
/**
 * _strstr - function locates a substring
 * @haystack: is a string
 * @needle: is a subString
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		char *temp;

		temp = needle;

		for (j = 0 ; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				;
			}
		}
		return (temp);
	}
	return (0);
}
