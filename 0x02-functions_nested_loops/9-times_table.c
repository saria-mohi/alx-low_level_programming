#include "main.h"
/**
 * times_table - print time table from 0 to 9
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int t = i * j;

			if ((t / 10) > 0)
				_putchar((t / 10) + '0');
			else
				_putchar(' ');
			_putchar((t % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
