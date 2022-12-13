#include "main.h"
/**
 * times_table - print time table from 0 to 9
*/
void times_table(void)
{
	int i, j, t;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			t = (i * j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (t >= 10)
			{
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
			}
			else if (t < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((t % 10) + '0');
			}
			else
				_putchar((t % 10) + '0');
		}
		_putchar('\n');
	}
}
