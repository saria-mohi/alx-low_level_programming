#include "main.h"
/**
 * puts_half - function to print the second half string
 * @str: string to be print the second half
 */
void puts_half(char *str)
{
	int i, half;

	for (i = 0; str[i] != '\0'; i++)
		;
	half = i / 2;

	if (i % 2 == 1)
		half++;
	while (half < i)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
