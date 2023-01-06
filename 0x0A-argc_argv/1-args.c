#include <stdio.h>
/**
 * main - function to print name of file
 * @argc: is count of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc-1);
	return (0);
}
