#include <stdio.h>
#include <unistd.h>
/*
 * main - entry point
 * return: 1
 * compile - should show no error with wall
 *
 */

int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19,\n",
	59);

	return (1);
}


