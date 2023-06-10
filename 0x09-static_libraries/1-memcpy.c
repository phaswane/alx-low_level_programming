#include "main.h"

/**
* _memcpy - copy memory area.
*
* @dest: destination memory
* @src: source memory
* @n: size of memory
* Return: pointer dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}

	return (dest);
}
