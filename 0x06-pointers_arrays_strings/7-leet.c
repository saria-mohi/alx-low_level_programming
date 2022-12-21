#include "main.h"
/**
 *  leet - encode string to 1337
 *  @str: String wanna to encode
 *  Return: Encoding
 */
char *leet(char *str)
{
	char ch[] = {'a', 'e', 'o', 't', 'l','A', 'E', 'O', 'T', 'L', '\0'};
	char num[] = "4433007711";

	int i, j;

	for (i = 0; str[i] != '\0'; ++i)
		for (j = 0; j < 9; j++)
			if (str[i] == ch[j])
				str[i] = num[j];
	return (str);
}
