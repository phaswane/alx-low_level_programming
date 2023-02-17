#include <stdio.h>
/**
 * main - main block
 * Description: Uses `putchar` function to print the alphabet in lowercase.
 * Return: 0 (success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 16; a++)
	{
		putchar(a + '0');
	}
	for (a = 'a'; a <= 'p'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
