#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function to concate all arguments
 * @ac: is counter
 * @av: is a pointer array
 * Return: NULL if ac == 0 or av == NULL ot pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, count, count2;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = j = count = count2 =0;

	for (i = 0; av[i]; i++)
		for (j = 0; j < av[i][j]; j++)
			count++;
	str = (char *) malloc(count * sizeof(char) + ac + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; j < av[i][j]; j++)
			str[count2] = av[i][j];
		str[count2++] = '\n';
	}
	str[count2] = '\0';
	return (str);
}
