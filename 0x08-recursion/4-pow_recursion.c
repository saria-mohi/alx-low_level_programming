#include "main.h"
/**
 * _pow_recursion - function calculate power
 * @x: is the number subscript
 * @y: is the superscript
 * Return: the result of x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
