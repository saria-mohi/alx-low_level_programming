#include "main.h"
/**
 * print_rev - function to print reversing String
 * @s: is String wanna to be revrse
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = i - 1;
		for (i = j; s[i] != '\0'; i--)
			_putchar(s[i]);
		_putchar('\n');
	}
}
