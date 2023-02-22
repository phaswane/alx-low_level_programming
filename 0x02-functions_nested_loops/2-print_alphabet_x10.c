#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: 0 always
 */

void print_alphabet_x10(void)
{
	int i = 1;

	while (i < 11)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		/*_putchar(i);*/
		i++;
		_putchar('\n');
	}

}
