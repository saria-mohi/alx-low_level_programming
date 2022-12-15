#include "main.h"
/**
 * _isdigit - print the number just
 * @c: is number or character wanna to check
 * Return: 1 if is digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
