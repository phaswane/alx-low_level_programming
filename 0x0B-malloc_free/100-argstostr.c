#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr -  a function that concatenates all the arguments of your program
 *
 * @ac: counts the number of arguments
 * @av: pointer to array of arguments
 *
 * Return: a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	char **ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	ptr = malloc(sizeof(char *) * ac);

	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*ptr = &av[i][j];

		}

		printf("\n");
	}

	return (*ptr);
}
