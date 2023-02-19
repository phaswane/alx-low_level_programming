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

	for (a = 49; a < 57; a++)
	{
		for (b = a + 1; b < 58; b++)
		{
			for (c = b + 1; c < 59; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 56 || b != 57 || c != 58)
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
