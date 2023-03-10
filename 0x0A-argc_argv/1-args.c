#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments passed
 * @argv: array pointing to arguements
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
