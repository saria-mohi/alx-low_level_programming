#include "main.h"
/**
 * _strlen - function to check size of '/string
 * @s: is string
 * Return: size of String
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
