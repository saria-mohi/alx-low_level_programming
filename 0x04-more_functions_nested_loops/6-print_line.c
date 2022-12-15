#include "main.h"
/**
 * print_line - print the _ as n times
 * @n: is number to drwa line from _
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
