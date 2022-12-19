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
	int i, pass1, pass2, c;

	char password[84];

	srand(time(NULL));

	while (c < 2772)
	{
		password[i] = 33 + rand() % 94;
		c += password[i++];
	}
	password[i] = '\0';

	if (c != 2772)
	{
		pass1 = (c - 2772) / 2;
		pass2 = (c - 2772) / 2;
		if ((c - 2772) % 2 != 0)
			pass1++;
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + pass2))
			{
				password[i] -= pass2;
				break;
			}
		}
	}
	printf("%s", password);

	return (0);
}
