#include "main.h"
/**
 * print_number - print the number
 * @n: is a number
 */
void print_number(int n)
{
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (n == 0)
		_putchar('0');
	if (num / 10)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}
