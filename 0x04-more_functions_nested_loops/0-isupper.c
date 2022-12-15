#include "main.h"
/**
 * _isupper - function to check character is upper or not
 * @c: is th check char
 * Return: 1 if character is upper 0 is not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
