#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - generate random password
 *
 * Return: 0
 */
int main(void)
{
	int i, n, s;

	s = 0;
	char password[84];

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		s += (password[i] + '0');
		putchar(password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - s) - '0' < 78)
		{
			n = 2772 - s - '0';
			s += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
