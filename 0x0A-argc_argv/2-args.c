#include <stdio.h>
/**
 * main - function to print name of file
 * @argc: is count of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
