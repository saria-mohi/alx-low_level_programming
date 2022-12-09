#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all character except e and q
 *
 * Return: 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		putchar(ch);
	}
	printf("\n");
	return (0);
}
