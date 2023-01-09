#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function to concat 2 String
 * @s1: String 1
 * @s2: is String 2
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *str;

	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
