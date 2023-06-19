#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the name of the structure data type
 * @name: name of the array of char data type
 * @age: name of a float variable
 * @owner: pointer to an array of char data type
 */

struct dog{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
