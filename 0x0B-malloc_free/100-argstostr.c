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
	int i, j, count = 0, count2 = 0;

	char *str;

	if (ac < 1 || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; j < av[i][j]; j++)
			count++;
	count += ac + 1;
	str = malloc(count * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < av[i][j]; j++)
			str[count2++] = av[i][j];
		str[count2++] = '\n';
	}
	str[count2] = '\0';
	return (str);
}
