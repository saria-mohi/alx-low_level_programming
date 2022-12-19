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
	int n = 9;
	 int i;

	char password[80];

	while (1)
	{
		if (n >= 8 && n <= 1023)
			break;
	}

	srand(time(NULL));

	for (i = 0; i < n; i++)
		password[i] = 33 + rand() % 94;
	password[n] = '\0';
	printf("%s\n", password);
	return (0);
}
