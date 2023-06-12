#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of charecters, initialized with specified char
 *
 * @size: the size of the array
 * @c: the initialized charater
 *
 * Return: pointer to the array, or NULL if failed
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(sizeof(char) * size);

	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}

	return (ptr);
}
