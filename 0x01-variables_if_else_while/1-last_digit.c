#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit
 *
 * Return: 0
*/
int main(void)
{
	int n;
	int result;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	result = n % 10;
	if (result > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, result);
	}
	else if (result == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, result);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, result);
	}
	return (0);
}
