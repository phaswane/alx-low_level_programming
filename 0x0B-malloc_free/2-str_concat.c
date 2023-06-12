#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  a function that concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: concatinated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	int i, j, k, s1_len = 0, s2_len = 0;

	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (j = 0; s2[j] != '\0'; j++)
		s2_len++;

	int length = s1_len + s2_len;

	ptr = (char *) malloc((sizeof(char) * length) + 1);

	if (ptr != NULL)
	{
		for (k = 0; k < length; k++)
		{
			ptr[k] = s1[k] + s2[s1_len + k];
		}
	}

	return (ptr);
}
