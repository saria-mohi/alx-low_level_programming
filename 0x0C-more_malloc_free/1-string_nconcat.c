#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - function to concat 2 string
 * @s1: is String one
 * @s2: is String 2
 * @n: is s2 byte
 * Return: pointer for new location memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int i, j, s1Size, s2Size;

	for (s1Size = 0; s1[s1Size]; s1Size++)
	for (s2Size = 0; s1[s2Size]; s2Size++)
	if (n < s2Size)
		str = malloc(sizeof(char) * (s1Size + n + 1));
	else
		str = malloc(sizeof(char) * (s1Size + s2Size + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < s1Size ; i++)
		str[i] = s1[i];
	while (n < s2Size && i < (s1Size + n))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	while (n >= s2Size && i < (s1Size + s2Size))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
