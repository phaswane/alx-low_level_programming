#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - a function frees dogs
 *
 * @d: pointer to a variable of struct dog data type
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
	}

	free(d);
}
