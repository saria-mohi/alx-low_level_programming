#include "main.h"
/**
 * string_toupper - function to change lowercase to uppercase
 * @str:string
 * Return: String in uppercase
 */
char *string_toupper(char *str)
{
	char *result = str;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (result);
}
