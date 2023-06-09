#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * c: is the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - prints the name of the pragram
 * @argc: the size of the command line arguments
 * @argv: the array of the commandline arguments
 *
 * Return: the first argument
 */

int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
	{
		char *str = argv[i];
		for (j = 0; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}

	_putchar('\n');
	return (0);
}
