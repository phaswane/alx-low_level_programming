#include "main.h"

/**
 * natural_sqr_checker - checks if the input number has natuarl sqr
 *
 * @n: input number
 * @sqrValue: value being checked for squire root
 *
 * Return: natural squre root
 */

int natural_sqr_checker(int n, int sqrValue)
{
	if (sqrValue * sqrValue == n)
	{
		return (sqrValue);
	}
	else if (sqrValue * sqrValue > n)
	{
		return (-1);
	}
	else
	{
		return (natural_sqr_checker(n, (sqrValue + 1)));
	}
}

/**
 * _sqrt_recursion - return the natural square root of an input number
 * @n: number to check for square root
 * Return: the natural square root of number
 */
int _sqrt_recursion(int n)
{
	return (natural_sqr_checker(n, 1));
}
