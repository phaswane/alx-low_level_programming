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

	for (a = 48; a < 57; a++)
	{
		for (b = a + 1; b < 58; b++)
		{
			for (c = b + 1; c < 59; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 57 || b != 58 || c != 59)
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
