#include "main.h"
/**
 * _strlen - function to print size of string
 * @s: is an array of char
 * Return: length od String
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
