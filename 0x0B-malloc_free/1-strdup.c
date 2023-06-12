#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: a given string to be allocated as a copy
 *
 * Return: returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *ptr = NULL;
	int i, j, count = 0;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
	{
		count++;
	}

	ptr = (char *) malloc((sizeof(char) * count) + 1);

	if (ptr != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			ptr[i] = str[i];
		}
	}

	return (ptr);
}
