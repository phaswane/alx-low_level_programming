#include "dog.h"
#include <stdlib.h>


/**
 * init_dog - initialize variables of the struct dog
 * @d:pointer to a variable of struct dog data type
 * @name: initialize dog name
 * @age: initialize dog age
 * @owner: initialize dog's owner
 *
 * Return: initialized structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
