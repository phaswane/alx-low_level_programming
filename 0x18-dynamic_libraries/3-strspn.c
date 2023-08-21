#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: segment to compare bytes from
 * @accept: string of bytes to compare with
 *
 * Return: number of bytes in segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
		{
			j++;
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
	}
	return (i);
}
