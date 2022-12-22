#include "main.h"
/**
 * rot13 - function subtitution any char after 13 place
 * @str: String wanna to encodeing
 * Return: encoding string
 */
char *rot13(char *str)
{
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char substitute[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (str[i] == ch[j])
			{
				str[i] = substitute[j];
				break;
			}
		}
	}
	return (str);
}
