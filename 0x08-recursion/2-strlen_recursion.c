#include "main.h"
/**
 * _strlen_recursion - function to print length of String
 * @s: is String wanna to calculate the length
 * Return: Lentgth of String
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
