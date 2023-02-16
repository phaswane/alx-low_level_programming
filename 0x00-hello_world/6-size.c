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

	printf("size of int is: %d byte(s) \n", sizeof(i));
	printf("size of char is: %d byte(s) \n", sizeof(c));
	printf("size of float is: %d byte(s) \n", sizeof(f));
	printf("size of long int is: %d byte(s) \n", sizeof(li));
	printf("size of long long int is: %d byte(s) \n", sizeof(lli));
	return (0);
}
