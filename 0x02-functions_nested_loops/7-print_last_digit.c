#include "main.h"
/**
 * print_last_digit - print last digit
 * @i: is number wanna to print their digit
 * Return: The last digit.
*/
int print_last_digit(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar((i % 10) + '0');
	return (i % 10);
}
