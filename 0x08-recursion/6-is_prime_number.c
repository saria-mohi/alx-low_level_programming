#include "main.h"
/**
 * CheckPrime - function to check number is prime or not
 * @num: is a number
 * @i: is iterator
 * Return: number present prime
 */
int CheckPrime(int i, int num)
{
	if (num == i)
		return (0);
	else if (num % i == 0)
		return (1);
	else
		return (CheckPrime(i + 1, num));
}

/**
 * is_prime_number - function to print prime number
 * @n: is number wanna to know prime or not
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (CheckPrime(2, n));
}
