#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints the contents of a structure
 *
 * @d: pointer to the structure to be printend
 *
 * Return: the structure print
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
