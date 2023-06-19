#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name of file main was compiled from, followed by a new line
 *
 * Return: the name of the file
 */
int main(void)
{
	printf(__FILE__"\n");

	return (0);
}
