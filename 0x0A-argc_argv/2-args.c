#include "main.h"
#include <stdio.h>

/**
 * main - prints the arguments
 * @argc: the size of the command line arguments
 * @argv: the array of the commandline arguments
 *
 * Return: arguments
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
