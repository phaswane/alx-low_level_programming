#include <stdio.h>
/**
 * main - main block
 * Description: Uses `putchar` function to print the alphabet in lowercase.
 * Return: 0 (success)
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');

	return (0);
}
