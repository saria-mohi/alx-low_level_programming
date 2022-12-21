#include "main.h"
/**
 * cap_string - capitalizes each word
 * @str: is String capital word
 * Return: String as capital
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char Separators[] = " \n\t,;.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	for (; str[i] != '\0'; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (str[i] == Separators[j])
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
		}
	}
	return (str);
}
