#include <stdio.h>
#include <unistd.h>
/**
 * main - print message without using puts or print functions
 *
 * Return: 0
*/
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
