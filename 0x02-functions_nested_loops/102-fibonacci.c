#include <stdio.h>
/**
 * main - print phabonaci
 *
 * Return: 0
*/
int main(void)
{
	unsigned long i, j, k, c;

	i = 0;
	j = 0;
	for (c = 0; c < 50; c++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
