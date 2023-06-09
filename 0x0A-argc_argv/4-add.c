#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: the size of the command line arguments
 * @argv: the array of the commandline arguments
 *
 * Return: sum of the numbers
 */

int main(int argc, char *argv[])
{
	int i, total = 0;

	if (argc != 3)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
		total = total + atoi(argv[i]);
		}
	}

	printf("%d\n", total);

	return (0);
}
