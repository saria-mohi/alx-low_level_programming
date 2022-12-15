#include <stdio.h>
/**
 * main  - print fizz bizz word when number multiple 3 and 5 and both
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char c;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			c = '\n';
		else
			c = ' ';

		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz%c", c);
		else if (i % 3 == 0)
			printf("Fizz%c", c);
		else if (i % 5 == 0)
			printf("Buzz%c",c);
		else
			printf("%i%c", i, c);
	}
	return (0);
}
