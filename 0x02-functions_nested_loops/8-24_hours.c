#include "main.h"
/**
 * jack_bauer - print munites per day
*/
void jack_bauer(void)
{
	int m, h;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			int h1 = h / 10; 
			int h2 = h % 10;
			int m1 = m / 10;
			int m2 = m % 10;

			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(':');
			_putchar(m1 + '0');
			_putchar(m2 + '0');
			_putchar('\n');
		}
	}
}
