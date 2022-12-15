#include "main.h"
/**
 * _isupper - function check character
 * @c: input character
 * Return: 1 if character is upper and 0 if character is lower
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
