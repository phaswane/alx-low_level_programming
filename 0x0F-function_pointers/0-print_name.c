#include "function_pointers.h"
/**
 * print_name- this function prints a name
 * @name: string to be printed
 * @f: is a function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
