#include "main.h"
/**
 * squareroot - function to check the natural square root
 * @n: natural square root
 * @c: counter
 * Return: if n is natural sqrt or not
 */
int squareroot(int n, int c)
{
	if (n < c * c)
		return (-1);
	else if (n == c * c)
		return (c);
	else
		return (squareroot(n, c + 1));
}
/**
 * _sqrt_recursion - function to print sqrt
 * @n: is number wanna to calculate sqrt
 * Return: the sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n,0));
}
