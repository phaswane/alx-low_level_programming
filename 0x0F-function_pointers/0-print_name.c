#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name- this function prints a name
 * @name: string to be printed
 * @f: is a function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(*f)(name);
}
