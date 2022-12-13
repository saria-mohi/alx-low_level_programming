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
	int len = strlen(ch);

	for (i = 0; i < len; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
