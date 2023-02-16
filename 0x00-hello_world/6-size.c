#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int i;
	char c;
	float f;
	long int w;
	long long int z;
	
	printf("size of a char: %d byte(s) \n", sizeof(c));
	printf("size of an int: %d byte(s) \n", sizeof(i));
	printf("size of a long int: %d byte(s) \n", sizeof(w));
	printf("size of a long long int: %d byte(s) \n", sizeof(z));
	printf("size of a float: %d byte(s) \n", sizeof(f));
	return (0);
}
