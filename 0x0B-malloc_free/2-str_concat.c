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
	int i, j, s1_len = 0, s2_len = 0, length;

	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (j = 0; s2[j] != '\0'; j++)
		s2_len++;

	length = s1_len + s2_len;

	ptr = (char *) malloc((sizeof(char) * length) + 1);

	if (s1 == NULL && s2 == NULL)
	{
		ptr = "";
	}

	for (i = 0; i < s1_len; i++)
	{
		if (s1 == NULL)
		{
			ptr = "";
		}
		else
		{
			ptr[i] = s1[i];
		}
	}

	for (j = 0; j < s2_len; j++)
	{
		if (s2 == NULL)
		{
			ptr = "";
		}

		ptr[j + s1_len] = s2[j];
	}

	return (ptr);
}
