#include "main.h"
/**
 * print_times_table - prints the times table for n.
 * @n: the number will be multiplication
*/
void print_times_table(int n)
{
	int i, j, t;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				t = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (t < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((t % 10) + '0');
				}
				else if (t >= 10 && t < 100)
				{
					_putchar(' ');
					_putchar((t / 10) + '0');
					_putchar((t % 10) + '0');
				}
				else if (t >= 100 && j != 0)
				{
					_putchar((t / 100) + '0');
					_putchar((t / 10) % 10 + '0');
					_putchar((t % 10) + '0');
				}
				else
				{
					_putchar((t % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
