#include "main.h"
#include <string.h>
/**
 * rev_string - function use to reverse String
 * @s: is String wanna to revrs
 */
void rev_string(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
