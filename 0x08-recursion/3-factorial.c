#include "main.h"

/**
 * factorial - finds factorial of a number
 *
 * @n: a number to find its factoria;
 *
 * Return: a factorial of  a number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
