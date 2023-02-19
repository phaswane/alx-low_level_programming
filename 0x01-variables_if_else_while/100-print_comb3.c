#include <stdio.h>

/**
 * main -  prints all possible different combinations of two digits
 *
 * Return: 0 (success)
 */

int main(void)
{
	int a;
	int b;

	for (a = 48; a < 57; a++)
	{
		for (b = a + 1; b < 58; b++)
		{
			putchar(a);
			putchar(b);
			if (a != 56 || b != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
