#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the pragram
 * @argc: the size of the command line arguments
 * @argv: the array of the commandline arguments
 *
 * Return: the first argument
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
		printf("%s\n", argv[0]);

	return (0);
}
