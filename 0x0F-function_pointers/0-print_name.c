#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name by passing a funtion to print as argument
 *
 * @name: pointer to a string to be printed
 * @f: pointer to a funtion that prints name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
