#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print 3 combination number
 *
 * Return: 0
*/
int main(void)
{
	int num, num1, num2;

	for (num = '0'; num <= '7'; num++)
	{
		for (num1 = num + 1; num1 <= '8'; num1++)
		{
			for (num2 = num1 + 1; num2 <= '9'; num2++)
			{
				putchar(num);
				putchar(num1);
				putchar(num2);
				if (num == '7' && num1 == '8' && num2 == '9')
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
