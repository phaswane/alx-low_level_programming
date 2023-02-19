#include <stdio.h>

/**
 * main -  prints all possible different combinations of three digits
 *
 * Return: 0 (success)
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a < 56; a++)
	{
		for (b = a + 1; b < 57; b++)
		{
			for (c = b + 1; c < 58; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55 || b != 56 || c != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
