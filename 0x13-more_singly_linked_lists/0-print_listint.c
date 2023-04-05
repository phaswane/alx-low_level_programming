#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t
 * @h: list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int lis = 0;

	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		lis++;
		printf("\n");
	}
	return (lis);
}
