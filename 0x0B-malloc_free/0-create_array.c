#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *@size: size of the array
 *@c: character
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *ptr;

	ptr = (char *)malloc(size * sizeof(char));

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		ptr[j] = c;
	}

	return (ptr);
}
