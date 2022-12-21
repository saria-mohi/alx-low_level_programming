#include "main.h"
/**
 * string_toupper - function to change lowercase to uppercase
 * @str:string
 * Return: String in uppercase
 */
char *string_toupper(char *str)
{
	int i, ch;

	ch = 'a' - 'A';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 'a' && str[i] < 'z')
		{
			str[i] = str[i] - ch;
		}
	}
	return (str);
}
