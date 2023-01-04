#include "main.h"
/**
 * _print_rev_recursion - function print revers of String
 * @s: is String wanna to print revese
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	_putchar(*s);
}
