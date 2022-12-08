#include <stdio.h>
/**
 * main - print the size of all datatype
 *
 * Return: 0
*/
int main(void)
{
	char ch;
	int i;
	long int l;
	long long int o;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(ch));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of an long int: %lu byte(s)\n", sizeof(l));
	printf("Size of an long long int: %lu byte(s)\n", sizeof(o));
	printf("Size of an float: %lu byte(s)\n", sizeof(f));
	return (0);
}
