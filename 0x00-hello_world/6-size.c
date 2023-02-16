#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 *
 **/

int main(void)
{
	int i;
	char c;
	float f;
	long int li;
	long long int lli;
	
	printf("size of char: %d byte(s) \n", sizeof(c));
	printf("size of int: %d byte(s) \n", sizeof(i));
	printf("size of long int: %d byte(s) \n", sizeof(li));
	printf("size of long long int: %d byte(s) \n", sizeof(lli));
	printf("size of float: %d byte(s) \n", sizeof(f));
	return (0);
}
