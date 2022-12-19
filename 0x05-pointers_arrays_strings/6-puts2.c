#include "main.h"
/**
 * puts2 - function to print other character
 * @str: is  string
 */
void puts2(char *str)
{
	int i, len;

	for (len = 0; str[len] != '\0'; len++);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
