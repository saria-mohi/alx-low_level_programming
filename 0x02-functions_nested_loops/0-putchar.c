#include <stdio.h>
/**
 * main - this program print character to user
 *
 * Return: 0
*/
int main(void)
{
	char statement[] = "_putchar";
	int i;

	for (i = 0; i < sizeof(statement); i++)
	{
		putchar(statement[i]);
	}
	putchar('\n');
	return (0);
}
