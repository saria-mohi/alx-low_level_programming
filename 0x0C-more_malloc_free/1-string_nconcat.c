#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - function to concat 2 strings
 * @s1: String 1
 * @s2: is string2
 * @n: is number of byte s2
 * Return: new pointer in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int i = 0, j = 0, size1 = 0, size2 = 0;

	while (s1 && s1[size1])
		size1++;
	while (s2 && s2[size2])
		size2++;
	if (n < size2)
		str = malloc(sizeof(char) * (size1 + n + 1));
	else
		str = malloc(sizeof(char) * (size1 + size2 + 1));
	if (str == NULL)
		return (NULL);
	while (i < size1)
	{
		str[i] = s1[i];
		i++;
	}
	while (n < size2 && i < (size1 + n))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	while (n >= size2 && i < (size1 + size2))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
