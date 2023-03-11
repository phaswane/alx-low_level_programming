#include "main.h"

/**
 * _isalpha - Checks for alphabetic charector
 * @c: character to be checked
 *
 * Return: 1 if character is letter, lowercase or uppercase,
 *	0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
	    (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
