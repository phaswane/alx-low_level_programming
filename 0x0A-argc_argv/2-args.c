#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments typed
 * @argv: array pointing to arguements
 * Return: 0 always
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
