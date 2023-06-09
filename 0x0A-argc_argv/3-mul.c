#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the size of the command line arguments
 * @argv: the array of the commandline arguments
 *
 * Return: the total
 */

int main(int argc, char *argv[])
{
	int Total;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	Total = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", Total);

	return (0);
}
