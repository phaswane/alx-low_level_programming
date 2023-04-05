#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _isdigit - arlet if the string consists of digits
  * @argv: argument vector
  * Return: return (0) if all digits, (1) if not all digits
  */
int _isdigit(char *argv)
{
	int z = 0;

	while (argv[z])
	{
		if (argv[z] >= '0' && argv[z] <= '9')
		{
			z++;
		}
		else
		{
			return (1);
		}
	}
	return (0);
}

/**
  * _atoi - converts a string of ascii digits to the value
  * @s: a pointer to the source string
  * Return: digits
  */
int _atoi(char *s)
{
	int j = 0, res = 0;

	while (s[j])
	{
		if (s[j] >= '0' && s[j] <= '9')
		{
			res *= 10;
			res += (s[j] - '0');
		}
		j++;
	}
	return (res);
}
/**
  * main - main function
  * @argc: argument count
  * @argv: 2D array of argument vector
  * Return: return 0 for success, 98 for failure
  */
int main(int argc, char *argv[])
{
	int p;

	malloc();
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (p = 1; p < argc; p++)
	{
		if (_isdigit(argv[p]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
