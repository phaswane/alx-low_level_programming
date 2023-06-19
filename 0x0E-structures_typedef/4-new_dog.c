#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, len_name = 0, len_owner = 0;
	dog_t *ptr;

	for (i = 0; name[i] != '\0'; i++)
		len_name++;
	for (j = 0; owner[j] != '\0'; j++)
		len_owner++;

	ptr = malloc((sizeof(char) * (len_name + len_owner)) + sizeof(float));

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
