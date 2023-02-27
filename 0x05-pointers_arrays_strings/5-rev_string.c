#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 *
 * @s: input charectors
 *
 * Return: reversed string
 */

void rev_string(char *s)
{
	char *start = s;
	char *end = s;
	char tmp;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
