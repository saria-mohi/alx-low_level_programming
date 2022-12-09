#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print numbert base 16
 *
 * Return: 0
*/
int main(void)
{
	int num;
	char ch;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
