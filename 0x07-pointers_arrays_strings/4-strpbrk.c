#include "main.h"
/**
 *  _strpbrk  -function to search string in any bytes
 *  @s: is  a String
 *  @accept: is a byte of string
 *  Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
