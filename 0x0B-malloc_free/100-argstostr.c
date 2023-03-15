#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, j = 0, len = 0;
	char *newstr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			len++;
		}
	}

	newstr = (char *)malloc(sizeof(char) * (len + ac) + 1);
	if (newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			newstr[j] = av[i][n];
			j++;
		}
		if (newstr[j] == '\0')
		{
			newstr[j++] = '\n';
		}
	}
	return (newstr);
}
