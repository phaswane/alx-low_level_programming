#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function returns number of elements in a linked listint_t
 * @h: is a list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int lis = 0;

	while (h)
	{
		h = h->next;
		lis++;
	}
	return (lis);
}
