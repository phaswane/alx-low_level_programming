#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: dest string
 * @src: src string
 * @n: size of src string
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	while (j < n)
	{
		dest[i + j] = src[j];
		j++;
	}

	return (dest);
}
