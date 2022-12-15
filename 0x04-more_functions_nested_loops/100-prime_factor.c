#include "main.h"
/**
 * main - print max factorial number
 *
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;

	long div = 2, ans = 0;

	long maxFact;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxFact = n;
			n = n / div;

			if (n == 1)
			{
				printf("%lu\n", maxFact);
				ans = ans + 1;
				break;
			}
		}
	}
	return (0);
}
