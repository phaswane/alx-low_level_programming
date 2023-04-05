#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to address of old memory
 * @old_size: unsigned int for old memory size
 * @new_size: unsigned int for new memory size
 * Return:  return pointer to an  array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *z;

	if (new_size > old_size)
	{
		z = malloc(new_size);
		free(ptr);
		return (z);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		z = malloc(new_size);
		free(ptr);
		return (z);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
