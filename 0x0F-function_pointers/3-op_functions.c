#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition operator
 * @a: first int
 * @b: second int
 * Return: sum of 2 numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operator
 * @a: first in
 * @b: second int
 * Return: difference of 2 numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product operator
 * @a: first int
 * @b: second int
 * Return: product of the numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operator
 * @a: first int
 * @b: second int
 * Return: division of the numbers
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
 * op_mod - remainder operator
 * @a: first int
 * @b: second int
 * Return: remainder
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
