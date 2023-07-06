#include "main.h"
#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to retrieve the bit from
 * @index: The index of the bit to retrieve
 *
 * Return: value of the bit at the given index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	int bits_value = (n & mask) >> index;

	if (index >= (sizeof(unsigned long int) * 8))
		return -1;

	return (bits_value);
}
