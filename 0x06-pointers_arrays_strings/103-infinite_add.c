#include "main.h"
/**
 * infinite_add - function to add 2 number
 * @n1: number1
 * @n2: number2
 * @r: to save result
 * @size_r: buffer size
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  int count = 0, i = 0, j;
	char *s1 = n1, *s2 = n2;

	while (*s1 != 0)
		s1++;
	while (*s2 != 0)
		s2++;
	size_r--;
	r[size_r] = 0;
	s1--;
	s2--;
	while (s2 != n2 - 1 && s1 != n1 - 1)
	{
		r[i] = *s2 - '0' + *s1 + count;
		count = 0;
		if (r[i] > '9')
		{
			count++;
			r[i] -= 10;
		}
		i++;
		s2--;
		s1--;
		if (size_r == i && (s1 != n1 - 1 || s2 != n2 - 1 || count == 1))
			return (0);
	}
	while (s1 != n1 - 1)
	{
		r[i] = *s1 + count;
		count = 0;
		if (r[i] > '9')
		{
			count = 1;
			r[i] -= 10;
		}
		s1--;
		i++;
		if (size_r == i && (s1 != n1 - 1 ||  count == 1))
			return (0);
	}
	while (s2 != n2 - 1)
	{
		r[i] = *s2 + count;
		count = 0;
		if (r[i] > '9')
		{
			count = 1;
			r[i] -= 10;
		}
		s2--;
		i++;
		if (size_r == i && (s2 != n2 - 1 || count == 1))
			return (0);
	}
	if (count == 1)
	{
		r[i] = '1';
		r[i + 1] = 0;
	}
	else
	{
		r[i--] = 0;
	}
	j = 0;
	while (j <= i)
	{
		count = r[i];
		r[i] = r[j];
		r[j] = count;
		i--;
		j++;
	}
	return (r);
}
