#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat -  a function that concatenates two strings
 * @s1: input one or string oe
 * @s2: input two or string two
 * @n: number of bytes for string two
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k, f;
	char *newmem;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
		j = n;
	j = j + i;

	newmem = (char *)malloc(sizeof(char) * (j + 1));

	if (newmem == NULL)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; k < i; k++)
			newmem[k] = s1[k];
		for (f = 0; k < j; f++)
		{
			newmem[k] = s2[f];
			k++;
		}
		k++;
		newmem[k] = '\0';
		return (newmem);
	}
}
