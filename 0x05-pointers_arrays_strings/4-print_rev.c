#include "main.h"
#include <string.h>
/**
 * print_rev - function to print reversing String
 * @s: is String wanna to be revrse
 */
void print_rev(char *s)
{
	int i, l, len, temp;

	len = strlen(s);
	l = len / 2;

	for (i = 0; i < l; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	_putchar('\n');
}
