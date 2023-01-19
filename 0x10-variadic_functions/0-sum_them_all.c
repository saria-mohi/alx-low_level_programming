#include "variadic_functions.h"
/**
 * sum_them_all - function to add all it parameters
 * @n: number of parameters
 * Return: sum result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);
	for (i = 0; i < n ; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
