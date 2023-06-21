#include "function_pointers.h"
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function
 *
 * @argv: an array of command line arguments
 * @argc: the number of commandline arguments
 *
 * Return: opcodes
 */

int main(int argc, char *argv[])
{
	int i;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[i]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < atoi(argv[i]); i++)
	{
		printf("%02hhx", *((char *)main + i));

		if (i < (atoi(argv[i])) - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}

	return (0);
}
