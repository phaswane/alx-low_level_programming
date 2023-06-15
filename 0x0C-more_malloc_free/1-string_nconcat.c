#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  a function that concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * @n: unsigned integer
 *
 * Return: pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len_s1 = 0, len_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		len_s1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len_s2++;
	}

	if (n >= len_s2)
	{
		n = len_s2;
	}

	ptr = (char *) malloc((sizeof(char) * (len_s1 + n)) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		ptr[len_s1 + j] = s2[j];
	}

	ptr[len_s1 + n] = '\0';

	return (ptr);
}
