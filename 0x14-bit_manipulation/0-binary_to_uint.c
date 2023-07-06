#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: is a pointer to a string of 0 and 1 characters
 *
 * Return: converted number or 0 if there is an invalid character or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		output = (output * 2) + (*b - '0');
	}

	return (output);
}
