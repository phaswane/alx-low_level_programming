#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of the arguments passed
 * @argc: the size of the command line arguments
 * @argv: the array of the commandline arguments
 *
 * Return: number of arguments
 */

int main(int argc, char *argv[])
{

	if (argv != NULL)
		printf("%d\n", argc - 1);

	return (0);
}
