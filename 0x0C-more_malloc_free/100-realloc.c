#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _realloc - allocates memory block using malloc
 * @ptr: pointer to the memory previosly allocated
 * @old_size: size of the allocated space of ptr
 * @new_size: new size to allocate
 * If new_size > old_size, the added memory should not be intialized
 * If new_size == old_size, returns the same pointer
 * If ptr == NULL, call is equivalent to malloc(new_size)
 * If new_size == 0 and ptr != NULL, call is equivalent to free(ptr)
 * Return: pointer to the new allocated memory and free ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *j;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	j = malloc(new_size);

	if (j == NULL)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (j);
	}

	j = _memcpy(p, ptr, (new_size > old_size ? old_size : new_size));
	free(ptr);
	return (j);
}

/**
 * _memcpy - copies the memory
 * @dest: destination pointer
 * @src: source pointer
 * @n: bytes to use from src
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		*(dest + k) = *(src + k);
		k++;
	}

	return (dest);
}
