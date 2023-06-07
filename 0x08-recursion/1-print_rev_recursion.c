#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string to be printed
 *
 * Return: a string in reverse to the standard output
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
