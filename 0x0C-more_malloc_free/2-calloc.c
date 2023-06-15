#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of array elements
 * @size: sizeof(data-type)
 *
 * Return: address to an allocated space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = (void *) malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
