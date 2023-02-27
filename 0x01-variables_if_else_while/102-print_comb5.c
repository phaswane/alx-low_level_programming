#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0 always
 */

int main(void)
{
	int i;
	int j;

	for (i = 0;i < 100; i++)
	{
		for (j = i;j < 100; j++)
		{
			if (i != j)
			{
				int n1 = i / 10;
				int n2 = i % 10;
				int n3 = j / 10;
				int n4 = j % 10;

				putchar('0' + n1);
				putchar('0' + n2);
				putchar(' ');
				putchar('0' + n3);
				putchar('0' + n4);
			
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

}
