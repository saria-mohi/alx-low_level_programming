#include "main.h"
/**
 *  leet - encode string to 1337
 *  @str: String wanna to encode
 *  Return: Encoding
 */
char *leet(char *str)
{
	char ch[] = "aAeEoOtTlL\0";
	char num[] = "4433007711\0";

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; j < 10; j++)
			if (str[i] == ch[j])
				str[i] = num[j];
	return (str);
}
