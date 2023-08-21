#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 *
 * @n: the size of the memory
 * @s: pointed charector
 * @b: the constant to fill the memory
 *
 * Return:  a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (0);
}
