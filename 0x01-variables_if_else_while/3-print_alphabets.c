#include <stdio.h>
/**
 * main - main block
 * Description: prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
	char alph = 'a';
	char ALPH = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	while (ALPH <= 'Z')
	{
		putchar(ALPH);
		ALPH++;
	}
	putchar('\n');

	return (0);
}
