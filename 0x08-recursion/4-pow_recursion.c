#include "main.h"

/**
 * _pow_recursion - returns value x raised by exponet y
 *
 * @x: base
 * @y: exponent
 *
 * Return: a number raised by its exponent
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
