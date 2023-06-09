#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print out the change
 * @argc: the size of the command line arguments
 * @argv: the array of the commandline arguments
 * Return: change
 */

int main(int argc, char **argv)
{
	int i = 0, change;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	while (change > 0)
	{
		if (change - 25 >= 0)
			change = change - 25;
		if (change - 10 >= 0)
			change = change - 10;
		if (change - 5 >= 0)
			change = change - 5;
		if (change - 2 >= 0)
			change = change - 2;
		if (change - 1 >= 0)
			change = change - 1;
		i++;
	}

	printf("%d\n", i);

	return (0);
}
