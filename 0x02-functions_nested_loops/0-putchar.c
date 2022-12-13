#include "main.h"

/**
 * main - print usint _putchar and call function
 *
 * Return: 0
*/
int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; i < sizeof(ch); i++)
		_putchar(ch[i]);
	_putchar('\n');
	return (0);
}
