#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: an array of pointers of integers
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, b1, b2;

	k = 0;
	b1 = 0;
	b2 = 0;
	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			(i == j) ? b1 += a[k] : 0;
			(i + j == size - 1) ? b2 += a[k] : 0;
			k++;
		}
	printf("%i, %i\n", b1, b2);
}
