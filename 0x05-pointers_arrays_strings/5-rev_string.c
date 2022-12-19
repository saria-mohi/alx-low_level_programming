#include "main.h"
/**
 * rev_string - reverses String
 * @s: is Astring to reverse
 */
void rev_string(char *s)
{
	char temp;

	int i, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len];
		s[len--] = temp;
	}
}
