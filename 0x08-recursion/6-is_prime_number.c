#include "main.h"
/**
 * CheckPrime - function to check number is prime or not
 * @num: is a number
 * @i: is iterator
 * Return: number present prime
 */
int CheckPrime(int num, int i)
{
	if (i == 1)
		return (1);
	else if (num % i == 0)
		return (0);
	else
		return (CheckPrime(num, i - 1));
}

/**
 * is_prime_number - function to print prime number
 * @n: is number wanna to know prime or not
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (CheckPrime(n, n  / 2) > 0)
		return (1);
	return (0);
}
