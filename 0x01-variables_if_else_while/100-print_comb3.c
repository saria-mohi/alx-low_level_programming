#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print differnt combination
 *
 * Return: 0
*/
int main(void)
{
	int num1, num2;

	for (num1 = '0'; num1 <= '8'; num1++)
	{
		for (num2 = num + 1; num2 <= '9'; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 != 8 && num2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
