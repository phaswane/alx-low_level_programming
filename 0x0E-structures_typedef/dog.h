#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - structure stsores details about a dog
 * @name: pet name
 * @age: pet age
 * @owner: pet owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - new name for struct dog
 */

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
