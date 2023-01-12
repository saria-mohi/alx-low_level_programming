#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * is_digit - print the number just
 * @s: is character to wanna check
 *
 * Return: 1 if is digit 0 if not
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}
/**
 * _atoi - function convert string to digit
 * @s: pointer of String
 * Return: digit
 */
int _atoi(char *s)
{
	int i, str;

	i = str = 0;

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			str *= 10;
			str += (s[i] - '0');
		}
		i++;
	}
	return (str);
}
/**
 * main - function to multiplication 2 number
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: when success 0 or 98
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		if (is_digit(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
