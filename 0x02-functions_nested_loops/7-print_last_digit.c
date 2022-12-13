#include "main.h"
/**
 * print_last_digit - print last digit
 * @i: is number wanna to print their digit
 * Return: The last digit.
*/
int print_last_digit(int i)
{
	int last = i % 10;

	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
