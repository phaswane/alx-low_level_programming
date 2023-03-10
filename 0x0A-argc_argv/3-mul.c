#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array pointing to arguements
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 2)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		int i = 1;

		while (i < argc)
		{
			mul = *argv[i] * *argv[i + 1];
			i++;
		}

		printf("%d\n", mul);
	}

	return (0);
}
