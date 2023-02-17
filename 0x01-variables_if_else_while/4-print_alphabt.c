#include <stdio.h>
/**
 * main - main block
 * Description:  prints the alphabet in lowercase, except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
		if (alph == 'e' || alph == 'q')
		alph++;
	}
	putchar('\n');

	return (0);
}
