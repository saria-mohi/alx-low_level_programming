#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - function add 2 int
 * @a: number1
 * @b: is number 2
 * Return: sum result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subscript numbers
 * @a: number 1
 * @b: is number 2
 * Return: result of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiplication numbers
 * @a: is number 1
 * @b: is number 2
 * Return: mul result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to division 2 number
 * @a: number 1
 * @b: is number 2
 * Return: result after a div b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - functon find mod
 * @a: number1
 * @b: number2
 * Return: result of a mod b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
