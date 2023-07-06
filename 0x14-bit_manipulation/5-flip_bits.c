#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get from
 *		one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int _result = n ^ m;
	unsigned int count = 0;

	while (_result > 0)
	{
		count += _result & 1;
		_result >>= 1;
	}

	return (count);
}
