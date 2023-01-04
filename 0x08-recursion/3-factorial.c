#include "main.h"
/**
 * factorial - function to calculate factorial number
 * @n: number wanna to calculate factorial
 * Return: factorial Nimber
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
