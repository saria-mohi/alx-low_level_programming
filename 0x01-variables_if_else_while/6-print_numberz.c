#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all numbers between 0 and 10
 *
 * Return: 0
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	printf("\n");
	return (0);
}
