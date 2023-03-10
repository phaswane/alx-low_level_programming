#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array pointing to arguements
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i, j, len, sum;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			len = strlen(argv[i]);

			for (j = 0; j < len; j++)
			{
				if (isdigit(*(argv[i] + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

	printf("%d\n", sum);
	}
	return (0);
}
