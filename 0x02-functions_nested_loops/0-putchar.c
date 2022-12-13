#include "main.h"

/**
 * main - Print character ustion _putchar
 *
 * Return: 0
*/

int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; i <sizeof(ch); i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
