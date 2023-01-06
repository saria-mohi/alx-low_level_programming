#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to print minimum number
 * @argc: counter of arguments
 * @argv: is arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, n, c = 0;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		puts("0");
		return (1);
	}
	for (i = 0; i < 5; i++)
	{
		if (n / coins[i])
		{
			c += n / coins[i];
			n %= coins[i];
		}
	}
	printf("%d\n", c);
	return (0);
}
